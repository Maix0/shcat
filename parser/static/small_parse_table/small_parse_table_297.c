/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_297.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1485(t_small_parse_table_array *v)
{
	v->a[29700] = state(745);
	v->a[29701] = 1;
	v->a[29702] = sym_variable_assignment;
	v->a[29703] = state(1237);
	v->a[29704] = 1;
	v->a[29705] = sym_file_redirect;
	v->a[29706] = state(1268);
	v->a[29707] = 1;
	v->a[29708] = sym_command;
	v->a[29709] = state(1288);
	v->a[29710] = 1;
	v->a[29711] = sym_subshell;
	v->a[29712] = actions(123);
	v->a[29713] = 2;
	v->a[29714] = sym_raw_string;
	v->a[29715] = sym_word;
	v->a[29716] = actions(1100);
	v->a[29717] = 2;
	v->a[29718] = anon_sym_LT_AMP_DASH;
	v->a[29719] = anon_sym_GT_AMP_DASH;
	small_parse_table_1486(v);
}

void	small_parse_table_1486(t_small_parse_table_array *v)
{
	v->a[29720] = state(282);
	v->a[29721] = 6;
	v->a[29722] = sym_arithmetic_expansion;
	v->a[29723] = sym_string;
	v->a[29724] = sym_number;
	v->a[29725] = sym_simple_expansion;
	v->a[29726] = sym_expansion;
	v->a[29727] = sym_command_substitution;
	v->a[29728] = actions(1098);
	v->a[29729] = 8;
	v->a[29730] = anon_sym_LT;
	v->a[29731] = anon_sym_GT;
	v->a[29732] = anon_sym_GT_GT;
	v->a[29733] = anon_sym_AMP_GT;
	v->a[29734] = anon_sym_AMP_GT_GT;
	v->a[29735] = anon_sym_LT_AMP;
	v->a[29736] = anon_sym_GT_AMP;
	v->a[29737] = anon_sym_GT_PIPE;
	v->a[29738] = 16;
	v->a[29739] = actions(3);
	small_parse_table_1487(v);
}

void	small_parse_table_1487(t_small_parse_table_array *v)
{
	v->a[29740] = 1;
	v->a[29741] = sym_comment;
	v->a[29742] = actions(574);
	v->a[29743] = 1;
	v->a[29744] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29745] = actions(577);
	v->a[29746] = 1;
	v->a[29747] = anon_sym_DOLLAR;
	v->a[29748] = actions(580);
	v->a[29749] = 1;
	v->a[29750] = anon_sym_DQUOTE;
	v->a[29751] = actions(583);
	v->a[29752] = 1;
	v->a[29753] = aux_sym_number_token1;
	v->a[29754] = actions(586);
	v->a[29755] = 1;
	v->a[29756] = aux_sym_number_token2;
	v->a[29757] = actions(589);
	v->a[29758] = 1;
	v->a[29759] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1488(v);
}

void	small_parse_table_1488(t_small_parse_table_array *v)
{
	v->a[29760] = actions(592);
	v->a[29761] = 1;
	v->a[29762] = anon_sym_DOLLAR_LPAREN;
	v->a[29763] = actions(595);
	v->a[29764] = 1;
	v->a[29765] = anon_sym_BQUOTE;
	v->a[29766] = actions(598);
	v->a[29767] = 1;
	v->a[29768] = sym_file_descriptor;
	v->a[29769] = actions(600);
	v->a[29770] = 1;
	v->a[29771] = sym__bare_dollar;
	v->a[29772] = state(306);
	v->a[29773] = 1;
	v->a[29774] = aux_sym_command_repeat2;
	v->a[29775] = state(753);
	v->a[29776] = 1;
	v->a[29777] = sym_concatenation;
	v->a[29778] = actions(1173);
	v->a[29779] = 2;
	small_parse_table_1489(v);
}

void	small_parse_table_1489(t_small_parse_table_array *v)
{
	v->a[29780] = sym_raw_string;
	v->a[29781] = sym_word;
	v->a[29782] = state(759);
	v->a[29783] = 6;
	v->a[29784] = sym_arithmetic_expansion;
	v->a[29785] = sym_string;
	v->a[29786] = sym_number;
	v->a[29787] = sym_simple_expansion;
	v->a[29788] = sym_expansion;
	v->a[29789] = sym_command_substitution;
	v->a[29790] = actions(572);
	v->a[29791] = 16;
	v->a[29792] = anon_sym_PIPE;
	v->a[29793] = anon_sym_AMP_AMP;
	v->a[29794] = anon_sym_PIPE_PIPE;
	v->a[29795] = anon_sym_LT;
	v->a[29796] = anon_sym_GT;
	v->a[29797] = anon_sym_GT_GT;
	v->a[29798] = anon_sym_AMP_GT;
	v->a[29799] = anon_sym_AMP_GT_GT;
	small_parse_table_1490(v);
}

/* EOF small_parse_table_297.c */
