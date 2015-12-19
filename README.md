Physics 2200 Final exam, Part I

One can approximate \pi as 

\pi ~= n sin(a_n) 

as n approaches infinity. We use the relationship:

sin(a\_{2n}) = \sqrt{1/2-\sqrt{1-sin^2(a\_n)}/2}

with the initial condition

sin(a_4) = 1/\sqrt{2}

to create a recursive function. However, the loss of precision causes a catastrophic failure at ~n = 2^15. We have updated this algorithm to use the following relationship:

sin(a\_{2n}) = \sqrt{2sin^2(a\_n) +2\sqrt{sin^4(a\_n)-sin^2(a\_n)}}

which does not not see the same failure, as shown by the following plot: 

![](pi-poly-u.pdf)
