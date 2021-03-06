#ifndef SINGLETASK_H
#define SINGLETASK_H

#include <QObject>
#include <QString>
#include <QDate>
#include<QDebug>

class SingleTask : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString description READ description WRITE setDescription NOTIFY descriptionChanged)
    Q_PROPERTY(QDate deadline READ deadline WRITE setDeadline NOTIFY deadlineChanged)
    Q_PROPERTY(bool isDone READ isDone WRITE setIsDone NOTIFY isDoneChanged)

public:
    explicit SingleTask(QObject *parent = 0);

    QString name() const;
    void setName(const QString &name);

    QString description() const;
    void setDescription(const QString &description);

    QDate deadline() const;
    void setDeadline(const QDate &deadline);

    bool isDone() const;
    void setIsDone(bool isDone);

    bool changed() const;
    void setChanged(bool changed);

signals:

    void nameChanged();
    void descriptionChanged();
    void deadlineChanged();
    void isDoneChanged();

public slots:


private:

    QString m_name;
    QString m_description;
    QDate m_deadline;
    bool m_isDone=false;
    bool m_changed=false;
};

#endif // SINGLETASK_H
