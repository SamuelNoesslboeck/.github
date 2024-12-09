# Construction

> For constructions, I use the programm "Solid Edge 2024"

In the following lines the structure of a construction project will be explained.

## File prefixes

The file prefixes declare which type of file it is and it's order. Here are all the prefixes listed:

- **{n}_{filename}.par**: Is the n-th *self-made part*, often 3D-printed ones
- **n{n}_{filename}.par**: Is the n-th *standard part*, like screws or similar
- **m{n}_{filename}.par**: Is the n-th *modified part*, just like standard parts but with small modifications (e.g. a standardized pipe cut to a specific length)

- **a{identifier}_{filename}.asm**: An assembly file with the given *identifier*
  - The main assembly of a construction project is named **a_{project_name_lowercase}.asm**
  - Every subassembly gets identified with a number, so for example **a1_first_subassembly.asm** and **a2_second_subassembly.asm**
  - Every additional subassembly adds another layer, with the first subassembly of the first subassembly being **a1.1_sub_sub_assembly**

- **e{n}_{filename}.par**: Is the n-th *electronics part*, same as standard parts, just to outline their use for electronics