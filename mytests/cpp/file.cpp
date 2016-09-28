%{Cpp:LicenseTemplate}\
#include "%{HdrFileName}"
%{JS: Cpp.openNamespaces('%{Class}')}

Test%{CN}::Test%{CN}(QObject *parent) : QObject(parent)
{

}

%{JS: Cpp.closeNamespaces('%{Class}')}\
