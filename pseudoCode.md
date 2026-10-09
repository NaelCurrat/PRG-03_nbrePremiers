# Pseudo code de mon programme de nombre premiers

1) Variables du programme :
    - Nombre limite minimum (limiteMin)
    - Nombre limite maximum (limiteMax)
    - Nombre de départ de la limite entrée par l'utilisateur (nbUtilisateurLimite)


3) Déroulement du programme
- 3.1) INPUT Nombre limite de départ
    - Nombre compris entre 2 et 1000 ?
        - Si non, -> 3.1
        - Si oui, -> 3.2
- 3.2) BOUCLE du nombre de départ au nombre d'arrivé
    - Si le nombre est premier, PRINT dans la liste des nombres premier
- 3.3) INPUT pour recommencez le programme
    - Réponse utilisateur est O ou N ?
        - Si le caractère est autre que O ou N -> 3.3
    - Caractère = O ?
        - OUTPUT Fin du programme 
   - Caractère = N 
        - Recommence le programme -> 3.1)