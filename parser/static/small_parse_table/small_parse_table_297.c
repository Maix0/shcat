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
	v->a[29700] = 1;
	v->a[29701] = anon_sym_DOLLAR_LBRACE;
	v->a[29702] = actions(1237);
	v->a[29703] = 1;
	v->a[29704] = anon_sym_DOLLAR_LPAREN;
	v->a[29705] = actions(1240);
	v->a[29706] = 1;
	v->a[29707] = anon_sym_BQUOTE;
	v->a[29708] = state(500);
	v->a[29709] = 2;
	v->a[29710] = sym_concatenation;
	v->a[29711] = aux_sym_for_statement_repeat1;
	v->a[29712] = actions(1222);
	v->a[29713] = 3;
	v->a[29714] = sym_raw_string;
	v->a[29715] = sym_number;
	v->a[29716] = sym_word;
	v->a[29717] = state(684);
	v->a[29718] = 5;
	v->a[29719] = sym_arithmetic_expansion;
	small_parse_table_1486(v);
}

void	small_parse_table_1486(t_small_parse_table_array *v)
{
	v->a[29720] = sym_string;
	v->a[29721] = sym_simple_expansion;
	v->a[29722] = sym_expansion;
	v->a[29723] = sym_command_substitution;
	v->a[29724] = actions(428);
	v->a[29725] = 6;
	v->a[29726] = anon_sym_AMP_AMP;
	v->a[29727] = anon_sym_PIPE_PIPE;
	v->a[29728] = anon_sym_LT;
	v->a[29729] = anon_sym_GT;
	v->a[29730] = anon_sym_GT_GT;
	v->a[29731] = aux_sym_heredoc_redirect_token1;
	v->a[29732] = 3;
	v->a[29733] = actions(3);
	v->a[29734] = 1;
	v->a[29735] = sym_comment;
	v->a[29736] = actions(1060);
	v->a[29737] = 1;
	v->a[29738] = sym__concat;
	v->a[29739] = actions(1058);
	small_parse_table_1487(v);
}

void	small_parse_table_1487(t_small_parse_table_array *v)
{
	v->a[29740] = 21;
	v->a[29741] = anon_sym_PIPE;
	v->a[29742] = anon_sym_RPAREN;
	v->a[29743] = anon_sym_SEMI_SEMI;
	v->a[29744] = anon_sym_AMP_AMP;
	v->a[29745] = anon_sym_PIPE_PIPE;
	v->a[29746] = anon_sym_LT;
	v->a[29747] = anon_sym_GT;
	v->a[29748] = anon_sym_GT_GT;
	v->a[29749] = anon_sym_LT_LT;
	v->a[29750] = aux_sym_heredoc_redirect_token1;
	v->a[29751] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29752] = aux_sym_concatenation_token1;
	v->a[29753] = anon_sym_DOLLAR;
	v->a[29754] = anon_sym_DQUOTE;
	v->a[29755] = sym_raw_string;
	v->a[29756] = sym_number;
	v->a[29757] = anon_sym_DOLLAR_LBRACE;
	v->a[29758] = anon_sym_DOLLAR_LPAREN;
	v->a[29759] = anon_sym_BQUOTE;
	small_parse_table_1488(v);
}

void	small_parse_table_1488(t_small_parse_table_array *v)
{
	v->a[29760] = sym_word;
	v->a[29761] = anon_sym_SEMI;
	v->a[29762] = 3;
	v->a[29763] = actions(3);
	v->a[29764] = 1;
	v->a[29765] = sym_comment;
	v->a[29766] = actions(1046);
	v->a[29767] = 2;
	v->a[29768] = sym__concat;
	v->a[29769] = ts_builtin_sym_end;
	v->a[29770] = actions(1048);
	v->a[29771] = 20;
	v->a[29772] = anon_sym_PIPE;
	v->a[29773] = anon_sym_SEMI_SEMI;
	v->a[29774] = anon_sym_AMP_AMP;
	v->a[29775] = anon_sym_PIPE_PIPE;
	v->a[29776] = anon_sym_LT;
	v->a[29777] = anon_sym_GT;
	v->a[29778] = anon_sym_GT_GT;
	v->a[29779] = anon_sym_LT_LT;
	small_parse_table_1489(v);
}

void	small_parse_table_1489(t_small_parse_table_array *v)
{
	v->a[29780] = aux_sym_heredoc_redirect_token1;
	v->a[29781] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29782] = aux_sym_concatenation_token1;
	v->a[29783] = anon_sym_DOLLAR;
	v->a[29784] = anon_sym_DQUOTE;
	v->a[29785] = sym_raw_string;
	v->a[29786] = sym_number;
	v->a[29787] = anon_sym_DOLLAR_LBRACE;
	v->a[29788] = anon_sym_DOLLAR_LPAREN;
	v->a[29789] = anon_sym_BQUOTE;
	v->a[29790] = sym_word;
	v->a[29791] = anon_sym_SEMI;
	v->a[29792] = 3;
	v->a[29793] = actions(3);
	v->a[29794] = 1;
	v->a[29795] = sym_comment;
	v->a[29796] = actions(1050);
	v->a[29797] = 1;
	v->a[29798] = sym__concat;
	v->a[29799] = actions(1052);
	small_parse_table_1490(v);
}

/* EOF small_parse_table_297.c */
