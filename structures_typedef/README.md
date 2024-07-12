La règle générale avec l'utilisation de typedef est d'écrire une déclaration comme si vous déclariez des variables des types que vous voulez. Là où une déclaration aurait introduit des noms avec des types particuliers, préfixer le tout avec typedef signifie que, au lieu de déclarer des variables, vous déclarez de nouveaux noms de types à la place. Ces nouveaux noms de types peuvent alors être utilisés comme préfixe à la déclaration des variables du nouveau type.

L'utilisation de typedefn'est pas particulièrement courante dans la plupart des programmes ; on la trouve généralement uniquement dans les fichiers d'en-tête et elle est rarement du ressort du codage quotidien.

On le retrouve parfois dans des applications nécessitant une très grande portabilité : là, de nouveaux types seront définis pour les variables de base du programme et typedefdes s appropriés seront utilisés pour adapter le programme à la machine cible. Cela peut conduire à un code que les programmeurs C d'autres environnements auront du mal à interpréter s'il est utilisé à outrance. Le principe est illustré ci-dessous :


