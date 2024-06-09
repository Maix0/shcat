/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_878.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4390(t_small_parse_table_array *v)
{
	v->a[87800] = 1;
	v->a[87801] = anon_sym_DQUOTE;
	v->a[87802] = actions(3712);
	v->a[87803] = 1;
	v->a[87804] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87805] = actions(3716);
	v->a[87806] = 1;
	v->a[87807] = sym_string_content;
	v->a[87808] = actions(3718);
	v->a[87809] = 1;
	v->a[87810] = anon_sym_DOLLAR_LBRACE;
	v->a[87811] = actions(3720);
	v->a[87812] = 1;
	v->a[87813] = anon_sym_DOLLAR_LPAREN;
	v->a[87814] = actions(3722);
	v->a[87815] = 1;
	v->a[87816] = anon_sym_BQUOTE;
	v->a[87817] = actions(3744);
	v->a[87818] = 1;
	v->a[87819] = anon_sym_DOLLAR;
	small_parse_table_4391(v);
}

void	small_parse_table_4391(t_small_parse_table_array *v)
{
	v->a[87820] = state(1738);
	v->a[87821] = 1;
	v->a[87822] = aux_sym_string_repeat1;
	v->a[87823] = state(1869);
	v->a[87824] = 4;
	v->a[87825] = sym_arithmetic_expansion;
	v->a[87826] = sym_simple_expansion;
	v->a[87827] = sym_expansion;
	v->a[87828] = sym_command_substitution;
	v->a[87829] = 3;
	v->a[87830] = actions(3);
	v->a[87831] = 1;
	v->a[87832] = sym_comment;
	v->a[87833] = actions(3620);
	v->a[87834] = 1;
	v->a[87835] = sym_extglob_pattern;
	v->a[87836] = actions(3616);
	v->a[87837] = 11;
	v->a[87838] = anon_sym_LPAREN;
	v->a[87839] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4392(v);
}

void	small_parse_table_4392(t_small_parse_table_array *v)
{
	v->a[87840] = anon_sym_DOLLAR;
	v->a[87841] = anon_sym_DQUOTE;
	v->a[87842] = sym_raw_string;
	v->a[87843] = aux_sym_number_token1;
	v->a[87844] = aux_sym_number_token2;
	v->a[87845] = anon_sym_DOLLAR_LBRACE;
	v->a[87846] = anon_sym_DOLLAR_LPAREN;
	v->a[87847] = anon_sym_BQUOTE;
	v->a[87848] = sym_word;
	v->a[87849] = 3;
	v->a[87850] = actions(3);
	v->a[87851] = 1;
	v->a[87852] = sym_comment;
	v->a[87853] = actions(3602);
	v->a[87854] = 1;
	v->a[87855] = sym_extglob_pattern;
	v->a[87856] = actions(3598);
	v->a[87857] = 11;
	v->a[87858] = anon_sym_LPAREN;
	v->a[87859] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4393(v);
}

void	small_parse_table_4393(t_small_parse_table_array *v)
{
	v->a[87860] = anon_sym_DOLLAR;
	v->a[87861] = anon_sym_DQUOTE;
	v->a[87862] = sym_raw_string;
	v->a[87863] = aux_sym_number_token1;
	v->a[87864] = aux_sym_number_token2;
	v->a[87865] = anon_sym_DOLLAR_LBRACE;
	v->a[87866] = anon_sym_DOLLAR_LPAREN;
	v->a[87867] = anon_sym_BQUOTE;
	v->a[87868] = sym_word;
	v->a[87869] = 6;
	v->a[87870] = actions(1404);
	v->a[87871] = 1;
	v->a[87872] = sym_comment;
	v->a[87873] = actions(3752);
	v->a[87874] = 1;
	v->a[87875] = anon_sym_LT_LT;
	v->a[87876] = actions(3754);
	v->a[87877] = 1;
	v->a[87878] = anon_sym_LT_LT_DASH;
	v->a[87879] = actions(3750);
	small_parse_table_4394(v);
}

void	small_parse_table_4394(t_small_parse_table_array *v)
{
	v->a[87880] = 2;
	v->a[87881] = anon_sym_LT_AMP_DASH;
	v->a[87882] = anon_sym_GT_AMP_DASH;
	v->a[87883] = actions(3748);
	v->a[87884] = 3;
	v->a[87885] = anon_sym_GT_GT;
	v->a[87886] = anon_sym_AMP_GT_GT;
	v->a[87887] = anon_sym_GT_PIPE;
	v->a[87888] = actions(3746);
	v->a[87889] = 5;
	v->a[87890] = anon_sym_LT;
	v->a[87891] = anon_sym_GT;
	v->a[87892] = anon_sym_AMP_GT;
	v->a[87893] = anon_sym_LT_AMP;
	v->a[87894] = anon_sym_GT_AMP;
	v->a[87895] = 4;
	v->a[87896] = actions(3);
	v->a[87897] = 1;
	v->a[87898] = sym_comment;
	v->a[87899] = actions(2141);
	small_parse_table_4395(v);
}

/* EOF small_parse_table_878.c */
