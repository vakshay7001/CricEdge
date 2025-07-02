#include "playermanager.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

PlayerManager::PlayerManager(const QString &csvPath)
    : m_csvPath(csvPath)
{
    // Show exactly where it's looking
    qDebug() << "🔍 PlayerManager using CSV path:" << m_csvPath;
}

bool PlayerManager::addPlayer(const QString &name, int age, const QString &team,
                              int matches, int runs, int wickets)
{
    qDebug() << "📝 Adding player, opening file:" << m_csvPath;

    QFile file(m_csvPath);
    if (file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << name << "," << age << "," << team << ","
            << matches << "," << runs << "," << wickets << "\n";
        file.close();
        qDebug() << "✅ Player added successfully.";
        return true;
    } else {
        qDebug() << "❌ File open failed:" << file.errorString();
    }
    return false;
}

QList<QStringList> PlayerManager::getAllPlayers()
{
    QList<QStringList> players;

    qDebug() << "📂 Reading players from:" << m_csvPath;

    QFile file(m_csvPath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine().trimmed();
            if (!line.isEmpty()) {
                QStringList fields = line.split(",");
                players.append(fields);
            }
        }
        file.close();
        qDebug() << "✅ Finished reading players.";
    } else {
        qDebug() << "❌ File read failed:" << file.errorString();
    }

    return players;
}
bool PlayerManager::playerExists(const QString &name)
{
    QFile file(m_csvPath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine().trimmed();
            if (!line.isEmpty()) {
                QStringList fields = line.split(",");
                if (fields[0].compare(name, Qt::CaseInsensitive) == 0) {
                    return true;
                }
            }
        }
        file.close();
    }
    return false;
}

