/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1568.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7840(t_small_parse_table_array *v)
{
	v->a[156800] = anon_sym_AMP;
	v->a[156801] = actions(6805);
	v->a[156802] = 16;
	v->a[156803] = anon_sym_PLUS_EQ;
	v->a[156804] = anon_sym_DASH_EQ;
	v->a[156805] = anon_sym_STAR_EQ;
	v->a[156806] = anon_sym_SLASH_EQ;
	v->a[156807] = anon_sym_PERCENT_EQ;
	v->a[156808] = anon_sym_STAR_STAR_EQ;
	v->a[156809] = anon_sym_LT_LT_EQ;
	v->a[156810] = anon_sym_GT_GT_EQ;
	v->a[156811] = anon_sym_AMP_EQ;
	v->a[156812] = anon_sym_CARET_EQ;
	v->a[156813] = anon_sym_PIPE_EQ;
	v->a[156814] = anon_sym_PIPE_PIPE;
	v->a[156815] = anon_sym_AMP_AMP;
	v->a[156816] = anon_sym_RBRACK;
	v->a[156817] = anon_sym_EQ_TILDE;
	v->a[156818] = anon_sym_QMARK;
	v->a[156819] = 10;
	small_parse_table_7841(v);
}

void	small_parse_table_7841(t_small_parse_table_array *v)
{
	v->a[156820] = actions(3);
	v->a[156821] = 1;
	v->a[156822] = sym_comment;
	v->a[156823] = actions(7272);
	v->a[156824] = 1;
	v->a[156825] = anon_sym_STAR_STAR;
	v->a[156826] = actions(7274);
	v->a[156827] = 1;
	v->a[156828] = aux_sym_heredoc_redirect_token1;
	v->a[156829] = actions(7250);
	v->a[156830] = 2;
	v->a[156831] = anon_sym_PLUS_PLUS;
	v->a[156832] = anon_sym_DASH_DASH;
	v->a[156833] = actions(7262);
	v->a[156834] = 2;
	v->a[156835] = anon_sym_EQ_EQ;
	v->a[156836] = anon_sym_BANG_EQ;
	v->a[156837] = actions(7266);
	v->a[156838] = 2;
	v->a[156839] = anon_sym_LT_LT;
	small_parse_table_7842(v);
}

void	small_parse_table_7842(t_small_parse_table_array *v)
{
	v->a[156840] = anon_sym_GT_GT;
	v->a[156841] = actions(7268);
	v->a[156842] = 2;
	v->a[156843] = anon_sym_PLUS;
	v->a[156844] = anon_sym_DASH;
	v->a[156845] = actions(7270);
	v->a[156846] = 3;
	v->a[156847] = anon_sym_STAR;
	v->a[156848] = anon_sym_SLASH;
	v->a[156849] = anon_sym_PERCENT;
	v->a[156850] = actions(7264);
	v->a[156851] = 4;
	v->a[156852] = anon_sym_LT;
	v->a[156853] = anon_sym_GT;
	v->a[156854] = anon_sym_LT_EQ;
	v->a[156855] = anon_sym_GT_EQ;
	v->a[156856] = actions(7248);
	v->a[156857] = 20;
	v->a[156858] = anon_sym_SEMI;
	v->a[156859] = anon_sym_COMMA;
	small_parse_table_7843(v);
}

void	small_parse_table_7843(t_small_parse_table_array *v)
{
	v->a[156860] = anon_sym_PLUS_EQ;
	v->a[156861] = anon_sym_DASH_EQ;
	v->a[156862] = anon_sym_STAR_EQ;
	v->a[156863] = anon_sym_SLASH_EQ;
	v->a[156864] = anon_sym_PERCENT_EQ;
	v->a[156865] = anon_sym_STAR_STAR_EQ;
	v->a[156866] = anon_sym_LT_LT_EQ;
	v->a[156867] = anon_sym_GT_GT_EQ;
	v->a[156868] = anon_sym_AMP_EQ;
	v->a[156869] = anon_sym_CARET_EQ;
	v->a[156870] = anon_sym_PIPE_EQ;
	v->a[156871] = anon_sym_PIPE_PIPE;
	v->a[156872] = anon_sym_DASHo;
	v->a[156873] = anon_sym_AMP_AMP;
	v->a[156874] = anon_sym_DASHa;
	v->a[156875] = anon_sym_PIPE;
	v->a[156876] = anon_sym_CARET;
	v->a[156877] = anon_sym_AMP;
	v->a[156878] = 13;
	v->a[156879] = actions(71);
	small_parse_table_7844(v);
}

void	small_parse_table_7844(t_small_parse_table_array *v)
{
	v->a[156880] = 1;
	v->a[156881] = sym_comment;
	v->a[156882] = actions(7288);
	v->a[156883] = 1;
	v->a[156884] = anon_sym_AMP;
	v->a[156885] = actions(7302);
	v->a[156886] = 1;
	v->a[156887] = anon_sym_STAR_STAR;
	v->a[156888] = actions(7304);
	v->a[156889] = 1;
	v->a[156890] = sym_test_operator;
	v->a[156891] = actions(7278);
	v->a[156892] = 2;
	v->a[156893] = anon_sym_PLUS_PLUS;
	v->a[156894] = anon_sym_DASH_DASH;
	v->a[156895] = actions(7290);
	v->a[156896] = 2;
	v->a[156897] = anon_sym_EQ_EQ;
	v->a[156898] = anon_sym_BANG_EQ;
	v->a[156899] = actions(7292);
	small_parse_table_7845(v);
}

/* EOF small_parse_table_1568.c */
