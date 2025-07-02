#ifndef PLAYERMANAGER_H
#define PLAYERMANAGER_H

#include <QString>
#include <QList>
#include <QStringList>

   class PlayerManager
 {
    public:
      explicit PlayerManager(const QString &csvPath);

      bool addPlayer(const QString &name, int age, const QString &team,
                   int matches, int runs, int wickets);

        QList<QStringList> getAllPlayers();
        bool playerExists(const QString &name);

    private:
      QString m_csvPath;
 };

#endif
