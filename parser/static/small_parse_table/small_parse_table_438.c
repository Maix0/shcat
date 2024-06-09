/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_438.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2190(t_small_parse_table_array *v)
{
	v->a[43800] = anon_sym_STAR_EQ;
	v->a[43801] = anon_sym_SLASH_EQ;
	v->a[43802] = anon_sym_PERCENT_EQ;
	v->a[43803] = anon_sym_LT_LT_EQ;
	v->a[43804] = anon_sym_GT_GT_EQ;
	v->a[43805] = anon_sym_AMP_EQ;
	v->a[43806] = anon_sym_CARET_EQ;
	v->a[43807] = anon_sym_PIPE_EQ;
	v->a[43808] = anon_sym_EQ_EQ;
	v->a[43809] = anon_sym_BANG_EQ;
	v->a[43810] = anon_sym_LT_EQ;
	v->a[43811] = anon_sym_GT_EQ;
	v->a[43812] = anon_sym_QMARK;
	v->a[43813] = anon_sym_PLUS_PLUS2;
	v->a[43814] = anon_sym_DASH_DASH2;
	v->a[43815] = 14;
	v->a[43816] = actions(3);
	v->a[43817] = 1;
	v->a[43818] = sym_comment;
	v->a[43819] = actions(750);
	small_parse_table_2191(v);
}

void	small_parse_table_2191(t_small_parse_table_array *v)
{
	v->a[43820] = 1;
	v->a[43821] = sym_file_descriptor;
	v->a[43822] = actions(1618);
	v->a[43823] = 1;
	v->a[43824] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43825] = actions(1620);
	v->a[43826] = 1;
	v->a[43827] = anon_sym_DOLLAR;
	v->a[43828] = actions(1622);
	v->a[43829] = 1;
	v->a[43830] = anon_sym_DQUOTE;
	v->a[43831] = actions(1624);
	v->a[43832] = 1;
	v->a[43833] = aux_sym_number_token1;
	v->a[43834] = actions(1626);
	v->a[43835] = 1;
	v->a[43836] = aux_sym_number_token2;
	v->a[43837] = actions(1628);
	v->a[43838] = 1;
	v->a[43839] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2192(v);
}

void	small_parse_table_2192(t_small_parse_table_array *v)
{
	v->a[43840] = actions(1630);
	v->a[43841] = 1;
	v->a[43842] = anon_sym_DOLLAR_LPAREN;
	v->a[43843] = actions(1632);
	v->a[43844] = 1;
	v->a[43845] = anon_sym_BQUOTE;
	v->a[43846] = state(1564);
	v->a[43847] = 1;
	v->a[43848] = sym_concatenation;
	v->a[43849] = actions(1640);
	v->a[43850] = 2;
	v->a[43851] = sym_raw_string;
	v->a[43852] = sym_word;
	v->a[43853] = state(1330);
	v->a[43854] = 6;
	v->a[43855] = sym_arithmetic_expansion;
	v->a[43856] = sym_string;
	v->a[43857] = sym_number;
	v->a[43858] = sym_simple_expansion;
	v->a[43859] = sym_expansion;
	small_parse_table_2193(v);
}

void	small_parse_table_2193(t_small_parse_table_array *v)
{
	v->a[43860] = sym_command_substitution;
	v->a[43861] = actions(748);
	v->a[43862] = 15;
	v->a[43863] = anon_sym_PIPE;
	v->a[43864] = anon_sym_AMP_AMP;
	v->a[43865] = anon_sym_PIPE_PIPE;
	v->a[43866] = anon_sym_LT;
	v->a[43867] = anon_sym_GT;
	v->a[43868] = anon_sym_GT_GT;
	v->a[43869] = anon_sym_AMP_GT;
	v->a[43870] = anon_sym_AMP_GT_GT;
	v->a[43871] = anon_sym_LT_AMP;
	v->a[43872] = anon_sym_GT_AMP;
	v->a[43873] = anon_sym_GT_PIPE;
	v->a[43874] = anon_sym_LT_AMP_DASH;
	v->a[43875] = anon_sym_GT_AMP_DASH;
	v->a[43876] = anon_sym_LT_LT;
	v->a[43877] = anon_sym_LT_LT_DASH;
	v->a[43878] = 3;
	v->a[43879] = actions(3);
	small_parse_table_2194(v);
}

void	small_parse_table_2194(t_small_parse_table_array *v)
{
	v->a[43880] = 1;
	v->a[43881] = sym_comment;
	v->a[43882] = actions(1243);
	v->a[43883] = 3;
	v->a[43884] = sym_file_descriptor;
	v->a[43885] = sym__concat;
	v->a[43886] = ts_builtin_sym_end;
	v->a[43887] = actions(1245);
	v->a[43888] = 30;
	v->a[43889] = anon_sym_PIPE;
	v->a[43890] = anon_sym_SEMI_SEMI;
	v->a[43891] = anon_sym_AMP_AMP;
	v->a[43892] = anon_sym_PIPE_PIPE;
	v->a[43893] = anon_sym_LT;
	v->a[43894] = anon_sym_GT;
	v->a[43895] = anon_sym_GT_GT;
	v->a[43896] = anon_sym_AMP_GT;
	v->a[43897] = anon_sym_AMP_GT_GT;
	v->a[43898] = anon_sym_LT_AMP;
	v->a[43899] = anon_sym_GT_AMP;
	small_parse_table_2195(v);
}

/* EOF small_parse_table_438.c */
