/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1578.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7890(t_small_parse_table_array *v)
{
	v->a[157800] = 1;
	v->a[157801] = anon_sym_CARET;
	v->a[157802] = actions(7288);
	v->a[157803] = 1;
	v->a[157804] = anon_sym_AMP;
	v->a[157805] = actions(7302);
	v->a[157806] = 1;
	v->a[157807] = anon_sym_STAR_STAR;
	v->a[157808] = actions(7304);
	v->a[157809] = 1;
	v->a[157810] = sym_test_operator;
	v->a[157811] = actions(6807);
	v->a[157812] = 2;
	v->a[157813] = anon_sym_EQ;
	v->a[157814] = anon_sym_PIPE;
	v->a[157815] = actions(7278);
	v->a[157816] = 2;
	v->a[157817] = anon_sym_PLUS_PLUS;
	v->a[157818] = anon_sym_DASH_DASH;
	v->a[157819] = actions(7290);
	small_parse_table_7891(v);
}

void	small_parse_table_7891(t_small_parse_table_array *v)
{
	v->a[157820] = 2;
	v->a[157821] = anon_sym_EQ_EQ;
	v->a[157822] = anon_sym_BANG_EQ;
	v->a[157823] = actions(7292);
	v->a[157824] = 2;
	v->a[157825] = anon_sym_LT;
	v->a[157826] = anon_sym_GT;
	v->a[157827] = actions(7294);
	v->a[157828] = 2;
	v->a[157829] = anon_sym_LT_EQ;
	v->a[157830] = anon_sym_GT_EQ;
	v->a[157831] = actions(7296);
	v->a[157832] = 2;
	v->a[157833] = anon_sym_LT_LT;
	v->a[157834] = anon_sym_GT_GT;
	v->a[157835] = actions(7298);
	v->a[157836] = 2;
	v->a[157837] = anon_sym_PLUS;
	v->a[157838] = anon_sym_DASH;
	v->a[157839] = actions(7300);
	small_parse_table_7892(v);
}

void	small_parse_table_7892(t_small_parse_table_array *v)
{
	v->a[157840] = 3;
	v->a[157841] = anon_sym_STAR;
	v->a[157842] = anon_sym_SLASH;
	v->a[157843] = anon_sym_PERCENT;
	v->a[157844] = actions(6805);
	v->a[157845] = 16;
	v->a[157846] = anon_sym_PLUS_EQ;
	v->a[157847] = anon_sym_DASH_EQ;
	v->a[157848] = anon_sym_STAR_EQ;
	v->a[157849] = anon_sym_SLASH_EQ;
	v->a[157850] = anon_sym_PERCENT_EQ;
	v->a[157851] = anon_sym_STAR_STAR_EQ;
	v->a[157852] = anon_sym_LT_LT_EQ;
	v->a[157853] = anon_sym_GT_GT_EQ;
	v->a[157854] = anon_sym_AMP_EQ;
	v->a[157855] = anon_sym_CARET_EQ;
	v->a[157856] = anon_sym_PIPE_EQ;
	v->a[157857] = anon_sym_PIPE_PIPE;
	v->a[157858] = anon_sym_AMP_AMP;
	v->a[157859] = anon_sym_RBRACK;
	small_parse_table_7893(v);
}

void	small_parse_table_7893(t_small_parse_table_array *v)
{
	v->a[157860] = anon_sym_EQ_TILDE;
	v->a[157861] = anon_sym_QMARK;
	v->a[157862] = 25;
	v->a[157863] = actions(71);
	v->a[157864] = 1;
	v->a[157865] = sym_comment;
	v->a[157866] = actions(6474);
	v->a[157867] = 1;
	v->a[157868] = sym_word;
	v->a[157869] = actions(6480);
	v->a[157870] = 1;
	v->a[157871] = anon_sym_LPAREN;
	v->a[157872] = actions(6488);
	v->a[157873] = 1;
	v->a[157874] = anon_sym_DOLLAR;
	v->a[157875] = actions(6494);
	v->a[157876] = 1;
	v->a[157877] = aux_sym_number_token1;
	v->a[157878] = actions(6496);
	v->a[157879] = 1;
	small_parse_table_7894(v);
}

void	small_parse_table_7894(t_small_parse_table_array *v)
{
	v->a[157880] = aux_sym_number_token2;
	v->a[157881] = actions(6500);
	v->a[157882] = 1;
	v->a[157883] = anon_sym_DOLLAR_LPAREN;
	v->a[157884] = actions(6508);
	v->a[157885] = 1;
	v->a[157886] = sym_test_operator;
	v->a[157887] = actions(6510);
	v->a[157888] = 1;
	v->a[157889] = sym_extglob_pattern;
	v->a[157890] = actions(6512);
	v->a[157891] = 1;
	v->a[157892] = sym__brace_start;
	v->a[157893] = actions(6530);
	v->a[157894] = 1;
	v->a[157895] = anon_sym_esac;
	v->a[157896] = actions(7226);
	v->a[157897] = 1;
	v->a[157898] = anon_sym_DOLLAR_LBRACK;
	v->a[157899] = actions(7228);
	small_parse_table_7895(v);
}

/* EOF small_parse_table_1578.c */
