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
	v->a[29700] = sym_string;
	v->a[29701] = sym_simple_expansion;
	v->a[29702] = sym_expansion;
	v->a[29703] = sym_command_substitution;
	v->a[29704] = actions(676);
	v->a[29705] = 22;
	v->a[29706] = anon_sym_PIPE;
	v->a[29707] = anon_sym_AMP_AMP;
	v->a[29708] = anon_sym_PIPE_PIPE;
	v->a[29709] = anon_sym_LT;
	v->a[29710] = anon_sym_GT;
	v->a[29711] = anon_sym_GT_GT;
	v->a[29712] = anon_sym_LT_AMP;
	v->a[29713] = anon_sym_GT_AMP;
	v->a[29714] = anon_sym_GT_PIPE;
	v->a[29715] = anon_sym_LT_GT;
	v->a[29716] = anon_sym_LT_LT;
	v->a[29717] = anon_sym_LT_LT_DASH;
	v->a[29718] = aux_sym_heredoc_redirect_token1;
	v->a[29719] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1486(v);
}

void	small_parse_table_1486(t_small_parse_table_array *v)
{
	v->a[29720] = anon_sym_DOLLAR;
	v->a[29721] = anon_sym_DQUOTE;
	v->a[29722] = sym_raw_string;
	v->a[29723] = sym_number;
	v->a[29724] = anon_sym_DOLLAR_LBRACE;
	v->a[29725] = anon_sym_DOLLAR_LPAREN;
	v->a[29726] = anon_sym_BQUOTE;
	v->a[29727] = sym_word;
	v->a[29728] = 6;
	v->a[29729] = actions(3);
	v->a[29730] = 1;
	v->a[29731] = sym_comment;
	v->a[29732] = actions(1115);
	v->a[29733] = 1;
	v->a[29734] = aux_sym_concatenation_token1;
	v->a[29735] = actions(1117);
	v->a[29736] = 1;
	v->a[29737] = sym__concat;
	v->a[29738] = state(359);
	v->a[29739] = 1;
	small_parse_table_1487(v);
}

void	small_parse_table_1487(t_small_parse_table_array *v)
{
	v->a[29740] = aux_sym_concatenation_repeat1;
	v->a[29741] = actions(1097);
	v->a[29742] = 2;
	v->a[29743] = sym_file_descriptor;
	v->a[29744] = sym__bare_dollar;
	v->a[29745] = actions(1099);
	v->a[29746] = 26;
	v->a[29747] = anon_sym_esac;
	v->a[29748] = anon_sym_LPAREN;
	v->a[29749] = anon_sym_PIPE;
	v->a[29750] = anon_sym_SEMI_SEMI;
	v->a[29751] = anon_sym_AMP_AMP;
	v->a[29752] = anon_sym_PIPE_PIPE;
	v->a[29753] = anon_sym_LT;
	v->a[29754] = anon_sym_GT;
	v->a[29755] = anon_sym_GT_GT;
	v->a[29756] = anon_sym_LT_AMP;
	v->a[29757] = anon_sym_GT_AMP;
	v->a[29758] = anon_sym_GT_PIPE;
	v->a[29759] = anon_sym_LT_GT;
	small_parse_table_1488(v);
}

void	small_parse_table_1488(t_small_parse_table_array *v)
{
	v->a[29760] = anon_sym_LT_LT;
	v->a[29761] = anon_sym_LT_LT_DASH;
	v->a[29762] = aux_sym_heredoc_redirect_token1;
	v->a[29763] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29764] = anon_sym_DOLLAR;
	v->a[29765] = anon_sym_DQUOTE;
	v->a[29766] = sym_raw_string;
	v->a[29767] = sym_number;
	v->a[29768] = anon_sym_DOLLAR_LBRACE;
	v->a[29769] = anon_sym_DOLLAR_LPAREN;
	v->a[29770] = anon_sym_BQUOTE;
	v->a[29771] = sym_word;
	v->a[29772] = anon_sym_SEMI;
	v->a[29773] = 6;
	v->a[29774] = actions(3);
	v->a[29775] = 1;
	v->a[29776] = sym_comment;
	v->a[29777] = actions(1119);
	v->a[29778] = 1;
	v->a[29779] = aux_sym_concatenation_token1;
	small_parse_table_1489(v);
}

void	small_parse_table_1489(t_small_parse_table_array *v)
{
	v->a[29780] = actions(1122);
	v->a[29781] = 1;
	v->a[29782] = sym__concat;
	v->a[29783] = state(363);
	v->a[29784] = 1;
	v->a[29785] = aux_sym_concatenation_repeat1;
	v->a[29786] = actions(1110);
	v->a[29787] = 2;
	v->a[29788] = sym_file_descriptor;
	v->a[29789] = sym__bare_dollar;
	v->a[29790] = actions(1105);
	v->a[29791] = 26;
	v->a[29792] = anon_sym_LPAREN;
	v->a[29793] = anon_sym_PIPE;
	v->a[29794] = anon_sym_RPAREN;
	v->a[29795] = anon_sym_SEMI_SEMI;
	v->a[29796] = anon_sym_AMP_AMP;
	v->a[29797] = anon_sym_PIPE_PIPE;
	v->a[29798] = anon_sym_LT;
	v->a[29799] = anon_sym_GT;
	small_parse_table_1490(v);
}

/* EOF small_parse_table_297.c */
