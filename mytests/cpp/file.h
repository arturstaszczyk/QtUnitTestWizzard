%{Cpp:LicenseTemplate}\
#ifndef %{GUARD}
#define %{GUARD}

%{JS: QtSupport.qtIncludes(
            ['QtCore/QObject', 'QtCore/QtTest'],
            ['QtCore/QObject', 'QtCore/QtTest']
      )}\

%{JS: Cpp.openNamespaces('%{Class}')}\
class Test%{CN} : public QObject
{
     Q_OBJECT
public:
    explicit Test%{CN}(QObject *parent = 0);

private slots:

};

%{JS: Cpp.closeNamespaces('%{Class}')}
#endif // %{GUARD}\
