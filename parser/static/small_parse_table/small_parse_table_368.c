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
	v->a[36800] = ts_builtin_sym_end;
	v->a[36801] = actions(983);
	v->a[36802] = 29;
	v->a[36803] = anon_sym_PIPE;
	v->a[36804] = anon_sym_SEMI_SEMI;
	v->a[36805] = anon_sym_AMP_AMP;
	v->a[36806] = anon_sym_PIPE_PIPE;
	v->a[36807] = anon_sym_LT;
	v->a[36808] = anon_sym_GT;
	v->a[36809] = anon_sym_GT_GT;
	v->a[36810] = anon_sym_AMP_GT;
	v->a[36811] = anon_sym_AMP_GT_GT;
	v->a[36812] = anon_sym_LT_AMP;
	v->a[36813] = anon_sym_GT_AMP;
	v->a[36814] = anon_sym_GT_PIPE;
	v->a[36815] = anon_sym_LT_AMP_DASH;
	v->a[36816] = anon_sym_GT_AMP_DASH;
	v->a[36817] = anon_sym_LT_LT;
	v->a[36818] = anon_sym_LT_LT_DASH;
	v->a[36819] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1841(v);
}

void	small_parse_table_1841(t_small_parse_table_array *v)
{
	v->a[36820] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36821] = anon_sym_AMP;
	v->a[36822] = aux_sym_concatenation_token1;
	v->a[36823] = anon_sym_DOLLAR;
	v->a[36824] = anon_sym_DQUOTE;
	v->a[36825] = sym_raw_string;
	v->a[36826] = sym_number;
	v->a[36827] = anon_sym_DOLLAR_LBRACE;
	v->a[36828] = anon_sym_DOLLAR_LPAREN;
	v->a[36829] = anon_sym_BQUOTE;
	v->a[36830] = sym_word;
	v->a[36831] = anon_sym_SEMI;
	v->a[36832] = 17;
	v->a[36833] = actions(1074);
	v->a[36834] = 1;
	v->a[36835] = sym_comment;
	v->a[36836] = actions(1136);
	v->a[36837] = 1;
	v->a[36838] = anon_sym_PIPE;
	v->a[36839] = actions(1138);
	small_parse_table_1842(v);
}

void	small_parse_table_1842(t_small_parse_table_array *v)
{
	v->a[36840] = 1;
	v->a[36841] = anon_sym_AMP_AMP;
	v->a[36842] = actions(1140);
	v->a[36843] = 1;
	v->a[36844] = anon_sym_PIPE_PIPE;
	v->a[36845] = actions(1150);
	v->a[36846] = 1;
	v->a[36847] = anon_sym_CARET;
	v->a[36848] = actions(1152);
	v->a[36849] = 1;
	v->a[36850] = anon_sym_AMP;
	v->a[36851] = actions(1239);
	v->a[36852] = 1;
	v->a[36853] = anon_sym_EQ;
	v->a[36854] = actions(1241);
	v->a[36855] = 1;
	v->a[36856] = anon_sym_QMARK;
	v->a[36857] = actions(1358);
	v->a[36858] = 1;
	v->a[36859] = anon_sym_RPAREN_RPAREN;
	small_parse_table_1843(v);
}

void	small_parse_table_1843(t_small_parse_table_array *v)
{
	v->a[36860] = actions(1144);
	v->a[36861] = 2;
	v->a[36862] = anon_sym_LT;
	v->a[36863] = anon_sym_GT;
	v->a[36864] = actions(1146);
	v->a[36865] = 2;
	v->a[36866] = anon_sym_GT_GT;
	v->a[36867] = anon_sym_LT_LT;
	v->a[36868] = actions(1154);
	v->a[36869] = 2;
	v->a[36870] = anon_sym_EQ_EQ;
	v->a[36871] = anon_sym_BANG_EQ;
	v->a[36872] = actions(1156);
	v->a[36873] = 2;
	v->a[36874] = anon_sym_LT_EQ;
	v->a[36875] = anon_sym_GT_EQ;
	v->a[36876] = actions(1158);
	v->a[36877] = 2;
	v->a[36878] = anon_sym_PLUS;
	v->a[36879] = anon_sym_DASH;
	small_parse_table_1844(v);
}

void	small_parse_table_1844(t_small_parse_table_array *v)
{
	v->a[36880] = actions(1162);
	v->a[36881] = 2;
	v->a[36882] = anon_sym_PLUS_PLUS2;
	v->a[36883] = anon_sym_DASH_DASH2;
	v->a[36884] = actions(1160);
	v->a[36885] = 3;
	v->a[36886] = anon_sym_STAR;
	v->a[36887] = anon_sym_SLASH;
	v->a[36888] = anon_sym_PERCENT;
	v->a[36889] = actions(1252);
	v->a[36890] = 10;
	v->a[36891] = anon_sym_PLUS_EQ;
	v->a[36892] = anon_sym_DASH_EQ;
	v->a[36893] = anon_sym_STAR_EQ;
	v->a[36894] = anon_sym_SLASH_EQ;
	v->a[36895] = anon_sym_PERCENT_EQ;
	v->a[36896] = anon_sym_LT_LT_EQ;
	v->a[36897] = anon_sym_GT_GT_EQ;
	v->a[36898] = anon_sym_AMP_EQ;
	v->a[36899] = anon_sym_CARET_EQ;
	small_parse_table_1845(v);
}

/* EOF small_parse_table_368.c */
