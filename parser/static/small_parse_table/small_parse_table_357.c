/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_357.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1785(t_small_parse_table_array *v)
{
	v->a[35700] = aux_sym_number_token2;
	v->a[35701] = anon_sym_DOLLAR_LBRACE;
	v->a[35702] = anon_sym_DOLLAR_LPAREN;
	v->a[35703] = anon_sym_BQUOTE;
	v->a[35704] = sym_word;
	v->a[35705] = anon_sym_SEMI;
	v->a[35706] = 6;
	v->a[35707] = actions(3);
	v->a[35708] = 1;
	v->a[35709] = sym_comment;
	v->a[35710] = actions(1112);
	v->a[35711] = 1;
	v->a[35712] = sym_file_descriptor;
	v->a[35713] = actions(1467);
	v->a[35714] = 1;
	v->a[35715] = aux_sym_concatenation_token1;
	v->a[35716] = actions(1470);
	v->a[35717] = 1;
	v->a[35718] = sym__concat;
	v->a[35719] = state(426);
	small_parse_table_1786(v);
}

void	small_parse_table_1786(t_small_parse_table_array *v)
{
	v->a[35720] = 1;
	v->a[35721] = aux_sym_concatenation_repeat1;
	v->a[35722] = actions(1114);
	v->a[35723] = 30;
	v->a[35724] = anon_sym_PIPE;
	v->a[35725] = anon_sym_RPAREN;
	v->a[35726] = anon_sym_SEMI_SEMI;
	v->a[35727] = anon_sym_AMP_AMP;
	v->a[35728] = anon_sym_PIPE_PIPE;
	v->a[35729] = anon_sym_LT;
	v->a[35730] = anon_sym_GT;
	v->a[35731] = anon_sym_GT_GT;
	v->a[35732] = anon_sym_AMP_GT;
	v->a[35733] = anon_sym_AMP_GT_GT;
	v->a[35734] = anon_sym_LT_AMP;
	v->a[35735] = anon_sym_GT_AMP;
	v->a[35736] = anon_sym_GT_PIPE;
	v->a[35737] = anon_sym_LT_AMP_DASH;
	v->a[35738] = anon_sym_GT_AMP_DASH;
	v->a[35739] = anon_sym_LT_LT;
	small_parse_table_1787(v);
}

void	small_parse_table_1787(t_small_parse_table_array *v)
{
	v->a[35740] = anon_sym_LT_LT_DASH;
	v->a[35741] = aux_sym_heredoc_redirect_token1;
	v->a[35742] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35743] = anon_sym_AMP;
	v->a[35744] = anon_sym_DOLLAR;
	v->a[35745] = anon_sym_DQUOTE;
	v->a[35746] = sym_raw_string;
	v->a[35747] = aux_sym_number_token1;
	v->a[35748] = aux_sym_number_token2;
	v->a[35749] = anon_sym_DOLLAR_LBRACE;
	v->a[35750] = anon_sym_DOLLAR_LPAREN;
	v->a[35751] = anon_sym_BQUOTE;
	v->a[35752] = sym_word;
	v->a[35753] = anon_sym_SEMI;
	v->a[35754] = 3;
	v->a[35755] = actions(1404);
	v->a[35756] = 1;
	v->a[35757] = sym_comment;
	v->a[35758] = actions(1317);
	v->a[35759] = 13;
	small_parse_table_1788(v);
}

void	small_parse_table_1788(t_small_parse_table_array *v)
{
	v->a[35760] = anon_sym_PIPE;
	v->a[35761] = anon_sym_EQ;
	v->a[35762] = anon_sym_LT;
	v->a[35763] = anon_sym_GT;
	v->a[35764] = anon_sym_GT_GT;
	v->a[35765] = anon_sym_LT_LT;
	v->a[35766] = anon_sym_CARET;
	v->a[35767] = anon_sym_AMP;
	v->a[35768] = anon_sym_PLUS;
	v->a[35769] = anon_sym_DASH;
	v->a[35770] = anon_sym_STAR;
	v->a[35771] = anon_sym_SLASH;
	v->a[35772] = anon_sym_PERCENT;
	v->a[35773] = actions(1319);
	v->a[35774] = 21;
	v->a[35775] = anon_sym_AMP_AMP;
	v->a[35776] = anon_sym_PIPE_PIPE;
	v->a[35777] = anon_sym_RPAREN_RPAREN;
	v->a[35778] = anon_sym_PLUS_EQ;
	v->a[35779] = anon_sym_DASH_EQ;
	small_parse_table_1789(v);
}

void	small_parse_table_1789(t_small_parse_table_array *v)
{
	v->a[35780] = anon_sym_STAR_EQ;
	v->a[35781] = anon_sym_SLASH_EQ;
	v->a[35782] = anon_sym_PERCENT_EQ;
	v->a[35783] = anon_sym_LT_LT_EQ;
	v->a[35784] = anon_sym_GT_GT_EQ;
	v->a[35785] = anon_sym_AMP_EQ;
	v->a[35786] = anon_sym_CARET_EQ;
	v->a[35787] = anon_sym_PIPE_EQ;
	v->a[35788] = anon_sym_EQ_EQ;
	v->a[35789] = anon_sym_BANG_EQ;
	v->a[35790] = anon_sym_LT_EQ;
	v->a[35791] = anon_sym_GT_EQ;
	v->a[35792] = anon_sym_QMARK;
	v->a[35793] = anon_sym_COLON;
	v->a[35794] = anon_sym_PLUS_PLUS2;
	v->a[35795] = anon_sym_DASH_DASH2;
	v->a[35796] = 14;
	v->a[35797] = actions(3);
	v->a[35798] = 1;
	v->a[35799] = sym_comment;
	small_parse_table_1790(v);
}

/* EOF small_parse_table_357.c */
