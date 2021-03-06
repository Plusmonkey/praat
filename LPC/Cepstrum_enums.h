/* Cepstrum_enums.h
 *
 * Copyright (C) 2019 David Weenink
 *
 * This code is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This code is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this work. If not, see <http://www.gnu.org/licenses/>.
 */

enums_begin (kCepstrumTrendType, 1)
	enums_add (kCepstrumTrendType, 1, Linear, U"Straight")
	enums_add (kCepstrumTrendType, 2, ExponentialDecay, U"Exponential decay")
enums_end (kCepstrumTrendType, 2, ExponentialDecay)

enums_begin (kCepstrumTrendFit, 1)
	enums_add (kCepstrumTrendFit, 1, RobustFast, U"Robust")
	enums_add (kCepstrumTrendFit, 2, LeastSquares, U"Least squares")
	enums_add (kCepstrumTrendFit, 3, RobustSlow, U"Robust slow")
enums_end (kCepstrumTrendFit, 3, RobustSlow)

/* End of file Cepstrum_enums.h */
