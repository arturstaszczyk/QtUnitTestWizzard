%{Cpp:LicenseTemplate}\
#include "%{HdrFileName}"
%{JS: Cpp.openNamespaces('%{Class}')}

%{CN}::%{CN}(QObject *parent) : QObject(parent)
{

}

%{JS: Cpp.closeNamespaces('%{Class}')}\
