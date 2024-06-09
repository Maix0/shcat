/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_368.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1840(t_small_parse_table_array *v)
{
	v->a[36800] = 3;
	v->a[36801] = actions(1404);
	v->a[36802] = 1;
	v->a[36803] = sym_comment;
	v->a[36804] = actions(1196);
	v->a[36805] = 13;
	v->a[36806] = anon_sym_PIPE;
	v->a[36807] = anon_sym_EQ;
	v->a[36808] = anon_sym_LT;
	v->a[36809] = anon_sym_GT;
	v->a[36810] = anon_sym_GT_GT;
	v->a[36811] = anon_sym_LT_LT;
	v->a[36812] = anon_sym_CARET;
	v->a[36813] = anon_sym_AMP;
	v->a[36814] = anon_sym_PLUS;
	v->a[36815] = anon_sym_DASH;
	v->a[36816] = anon_sym_STAR;
	v->a[36817] = anon_sym_SLASH;
	v->a[36818] = anon_sym_PERCENT;
	v->a[36819] = actions(1194);
	small_parse_table_1841(v);
}

void	small_parse_table_1841(t_small_parse_table_array *v)
{
	v->a[36820] = 21;
	v->a[36821] = anon_sym_AMP_AMP;
	v->a[36822] = anon_sym_PIPE_PIPE;
	v->a[36823] = anon_sym_RPAREN_RPAREN;
	v->a[36824] = anon_sym_PLUS_EQ;
	v->a[36825] = anon_sym_DASH_EQ;
	v->a[36826] = anon_sym_STAR_EQ;
	v->a[36827] = anon_sym_SLASH_EQ;
	v->a[36828] = anon_sym_PERCENT_EQ;
	v->a[36829] = anon_sym_LT_LT_EQ;
	v->a[36830] = anon_sym_GT_GT_EQ;
	v->a[36831] = anon_sym_AMP_EQ;
	v->a[36832] = anon_sym_CARET_EQ;
	v->a[36833] = anon_sym_PIPE_EQ;
	v->a[36834] = anon_sym_EQ_EQ;
	v->a[36835] = anon_sym_BANG_EQ;
	v->a[36836] = anon_sym_LT_EQ;
	v->a[36837] = anon_sym_GT_EQ;
	v->a[36838] = anon_sym_QMARK;
	v->a[36839] = anon_sym_COLON;
	small_parse_table_1842(v);
}

void	small_parse_table_1842(t_small_parse_table_array *v)
{
	v->a[36840] = anon_sym_PLUS_PLUS2;
	v->a[36841] = anon_sym_DASH_DASH2;
	v->a[36842] = 3;
	v->a[36843] = actions(3);
	v->a[36844] = 1;
	v->a[36845] = sym_comment;
	v->a[36846] = actions(1241);
	v->a[36847] = 3;
	v->a[36848] = sym_file_descriptor;
	v->a[36849] = sym__concat;
	v->a[36850] = sym__bare_dollar;
	v->a[36851] = actions(1239);
	v->a[36852] = 31;
	v->a[36853] = anon_sym_PIPE;
	v->a[36854] = anon_sym_RPAREN;
	v->a[36855] = anon_sym_SEMI_SEMI;
	v->a[36856] = anon_sym_AMP_AMP;
	v->a[36857] = anon_sym_PIPE_PIPE;
	v->a[36858] = anon_sym_LT;
	v->a[36859] = anon_sym_GT;
	small_parse_table_1843(v);
}

void	small_parse_table_1843(t_small_parse_table_array *v)
{
	v->a[36860] = anon_sym_GT_GT;
	v->a[36861] = anon_sym_AMP_GT;
	v->a[36862] = anon_sym_AMP_GT_GT;
	v->a[36863] = anon_sym_LT_AMP;
	v->a[36864] = anon_sym_GT_AMP;
	v->a[36865] = anon_sym_GT_PIPE;
	v->a[36866] = anon_sym_LT_AMP_DASH;
	v->a[36867] = anon_sym_GT_AMP_DASH;
	v->a[36868] = anon_sym_LT_LT;
	v->a[36869] = anon_sym_LT_LT_DASH;
	v->a[36870] = aux_sym_heredoc_redirect_token1;
	v->a[36871] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36872] = anon_sym_AMP;
	v->a[36873] = aux_sym_concatenation_token1;
	v->a[36874] = anon_sym_DOLLAR;
	v->a[36875] = anon_sym_DQUOTE;
	v->a[36876] = sym_raw_string;
	v->a[36877] = aux_sym_number_token1;
	v->a[36878] = aux_sym_number_token2;
	v->a[36879] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1844(v);
}

void	small_parse_table_1844(t_small_parse_table_array *v)
{
	v->a[36880] = anon_sym_DOLLAR_LPAREN;
	v->a[36881] = anon_sym_BQUOTE;
	v->a[36882] = sym_word;
	v->a[36883] = anon_sym_SEMI;
	v->a[36884] = 6;
	v->a[36885] = actions(3);
	v->a[36886] = 1;
	v->a[36887] = sym_comment;
	v->a[36888] = actions(1225);
	v->a[36889] = 1;
	v->a[36890] = aux_sym_concatenation_token1;
	v->a[36891] = actions(1263);
	v->a[36892] = 1;
	v->a[36893] = sym__concat;
	v->a[36894] = state(436);
	v->a[36895] = 1;
	v->a[36896] = aux_sym_concatenation_repeat1;
	v->a[36897] = actions(1261);
	v->a[36898] = 2;
	v->a[36899] = sym_file_descriptor;
	small_parse_table_1845(v);
}

/* EOF small_parse_table_368.c */
