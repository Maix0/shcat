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
	v->a[29700] = anon_sym_PIPE;
	v->a[29701] = anon_sym_AMP_AMP;
	v->a[29702] = anon_sym_PIPE_PIPE;
	v->a[29703] = anon_sym_LT;
	v->a[29704] = anon_sym_GT;
	v->a[29705] = anon_sym_GT_GT;
	v->a[29706] = anon_sym_LT_AMP;
	v->a[29707] = anon_sym_GT_AMP;
	v->a[29708] = anon_sym_GT_PIPE;
	v->a[29709] = anon_sym_LT_GT;
	v->a[29710] = anon_sym_LT_LT;
	v->a[29711] = anon_sym_LT_LT_DASH;
	v->a[29712] = 6;
	v->a[29713] = actions(3);
	v->a[29714] = 1;
	v->a[29715] = sym_comment;
	v->a[29716] = actions(1132);
	v->a[29717] = 1;
	v->a[29718] = aux_sym_concatenation_token1;
	v->a[29719] = actions(1135);
	small_parse_table_1486(v);
}

void	small_parse_table_1486(t_small_parse_table_array *v)
{
	v->a[29720] = 1;
	v->a[29721] = sym__concat;
	v->a[29722] = state(362);
	v->a[29723] = 1;
	v->a[29724] = aux_sym_concatenation_repeat1;
	v->a[29725] = actions(1092);
	v->a[29726] = 2;
	v->a[29727] = sym_file_descriptor;
	v->a[29728] = sym__bare_dollar;
	v->a[29729] = actions(1094);
	v->a[29730] = 27;
	v->a[29731] = anon_sym_esac;
	v->a[29732] = anon_sym_LPAREN;
	v->a[29733] = anon_sym_PIPE;
	v->a[29734] = anon_sym_SEMI_SEMI;
	v->a[29735] = anon_sym_AMP_AMP;
	v->a[29736] = anon_sym_PIPE_PIPE;
	v->a[29737] = anon_sym_LT;
	v->a[29738] = anon_sym_GT;
	v->a[29739] = anon_sym_GT_GT;
	small_parse_table_1487(v);
}

void	small_parse_table_1487(t_small_parse_table_array *v)
{
	v->a[29740] = anon_sym_LT_AMP;
	v->a[29741] = anon_sym_GT_AMP;
	v->a[29742] = anon_sym_GT_PIPE;
	v->a[29743] = anon_sym_LT_GT;
	v->a[29744] = anon_sym_LT_LT;
	v->a[29745] = anon_sym_LT_LT_DASH;
	v->a[29746] = aux_sym_heredoc_redirect_token1;
	v->a[29747] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29748] = anon_sym_AMP;
	v->a[29749] = anon_sym_DOLLAR;
	v->a[29750] = anon_sym_DQUOTE;
	v->a[29751] = sym_raw_string;
	v->a[29752] = sym_number;
	v->a[29753] = anon_sym_DOLLAR_LBRACE;
	v->a[29754] = anon_sym_DOLLAR_LPAREN;
	v->a[29755] = anon_sym_BQUOTE;
	v->a[29756] = sym_word;
	v->a[29757] = anon_sym_SEMI;
	v->a[29758] = 19;
	v->a[29759] = actions(3);
	small_parse_table_1488(v);
}

void	small_parse_table_1488(t_small_parse_table_array *v)
{
	v->a[29760] = 1;
	v->a[29761] = sym_comment;
	v->a[29762] = actions(1059);
	v->a[29763] = 1;
	v->a[29764] = anon_sym_PIPE;
	v->a[29765] = actions(1067);
	v->a[29766] = 1;
	v->a[29767] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29768] = actions(1069);
	v->a[29769] = 1;
	v->a[29770] = anon_sym_DOLLAR;
	v->a[29771] = actions(1071);
	v->a[29772] = 1;
	v->a[29773] = anon_sym_DQUOTE;
	v->a[29774] = actions(1073);
	v->a[29775] = 1;
	v->a[29776] = anon_sym_DOLLAR_LBRACE;
	v->a[29777] = actions(1075);
	v->a[29778] = 1;
	v->a[29779] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1489(v);
}

void	small_parse_table_1489(t_small_parse_table_array *v)
{
	v->a[29780] = actions(1077);
	v->a[29781] = 1;
	v->a[29782] = anon_sym_BQUOTE;
	v->a[29783] = actions(1079);
	v->a[29784] = 1;
	v->a[29785] = sym_file_descriptor;
	v->a[29786] = actions(1138);
	v->a[29787] = 1;
	v->a[29788] = aux_sym_heredoc_redirect_token1;
	v->a[29789] = state(1281);
	v->a[29790] = 1;
	v->a[29791] = aux_sym__heredoc_command;
	v->a[29792] = state(1725);
	v->a[29793] = 1;
	v->a[29794] = sym_concatenation;
	v->a[29795] = state(2068);
	v->a[29796] = 1;
	v->a[29797] = sym__heredoc_expression;
	v->a[29798] = state(2078);
	v->a[29799] = 1;
	small_parse_table_1490(v);
}

/* EOF small_parse_table_297.c */
