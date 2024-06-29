/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_778.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3890(t_small_parse_table_array *v)
{
	v->a[77800] = 7;
	v->a[77801] = anon_sym_PIPE;
	v->a[77802] = anon_sym_LT;
	v->a[77803] = anon_sym_GT;
	v->a[77804] = anon_sym_AMP_GT;
	v->a[77805] = anon_sym_LT_AMP;
	v->a[77806] = anon_sym_GT_AMP;
	v->a[77807] = anon_sym_LT_LT;
	v->a[77808] = actions(1100);
	v->a[77809] = 11;
	v->a[77810] = sym_file_descriptor;
	v->a[77811] = sym__concat;
	v->a[77812] = anon_sym_AMP_AMP;
	v->a[77813] = anon_sym_PIPE_PIPE;
	v->a[77814] = anon_sym_GT_GT;
	v->a[77815] = anon_sym_AMP_GT_GT;
	v->a[77816] = anon_sym_GT_PIPE;
	v->a[77817] = anon_sym_LT_AMP_DASH;
	v->a[77818] = anon_sym_GT_AMP_DASH;
	v->a[77819] = anon_sym_LT_LT_DASH;
	small_parse_table_3891(v);
}

void	small_parse_table_3891(t_small_parse_table_array *v)
{
	v->a[77820] = aux_sym_concatenation_token1;
	v->a[77821] = 10;
	v->a[77822] = actions(3);
	v->a[77823] = 1;
	v->a[77824] = sym_comment;
	v->a[77825] = actions(345);
	v->a[77826] = 1;
	v->a[77827] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77828] = actions(347);
	v->a[77829] = 1;
	v->a[77830] = anon_sym_DOLLAR;
	v->a[77831] = actions(349);
	v->a[77832] = 1;
	v->a[77833] = anon_sym_DQUOTE;
	v->a[77834] = actions(353);
	v->a[77835] = 1;
	v->a[77836] = anon_sym_DOLLAR_LBRACE;
	v->a[77837] = actions(355);
	v->a[77838] = 1;
	v->a[77839] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3892(v);
}

void	small_parse_table_3892(t_small_parse_table_array *v)
{
	v->a[77840] = actions(357);
	v->a[77841] = 1;
	v->a[77842] = anon_sym_BQUOTE;
	v->a[77843] = actions(2687);
	v->a[77844] = 1;
	v->a[77845] = sym__bare_dollar;
	v->a[77846] = actions(2685);
	v->a[77847] = 5;
	v->a[77848] = aux_sym_concatenation_token1;
	v->a[77849] = sym_raw_string;
	v->a[77850] = sym_number;
	v->a[77851] = sym__comment_word;
	v->a[77852] = sym_word;
	v->a[77853] = state(823);
	v->a[77854] = 5;
	v->a[77855] = sym_arithmetic_expansion;
	v->a[77856] = sym_string;
	v->a[77857] = sym_simple_expansion;
	v->a[77858] = sym_expansion;
	v->a[77859] = sym_command_substitution;
	small_parse_table_3893(v);
}

void	small_parse_table_3893(t_small_parse_table_array *v)
{
	v->a[77860] = 10;
	v->a[77861] = actions(3);
	v->a[77862] = 1;
	v->a[77863] = sym_comment;
	v->a[77864] = actions(477);
	v->a[77865] = 1;
	v->a[77866] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77867] = actions(481);
	v->a[77868] = 1;
	v->a[77869] = anon_sym_DQUOTE;
	v->a[77870] = actions(483);
	v->a[77871] = 1;
	v->a[77872] = anon_sym_DOLLAR_LBRACE;
	v->a[77873] = actions(485);
	v->a[77874] = 1;
	v->a[77875] = anon_sym_DOLLAR_LPAREN;
	v->a[77876] = actions(487);
	v->a[77877] = 1;
	v->a[77878] = anon_sym_BQUOTE;
	v->a[77879] = actions(2691);
	small_parse_table_3894(v);
}

void	small_parse_table_3894(t_small_parse_table_array *v)
{
	v->a[77880] = 1;
	v->a[77881] = anon_sym_DOLLAR;
	v->a[77882] = actions(2693);
	v->a[77883] = 1;
	v->a[77884] = sym__bare_dollar;
	v->a[77885] = actions(2689);
	v->a[77886] = 5;
	v->a[77887] = aux_sym_concatenation_token1;
	v->a[77888] = sym_raw_string;
	v->a[77889] = sym_number;
	v->a[77890] = sym__comment_word;
	v->a[77891] = sym_word;
	v->a[77892] = state(551);
	v->a[77893] = 5;
	v->a[77894] = sym_arithmetic_expansion;
	v->a[77895] = sym_string;
	v->a[77896] = sym_simple_expansion;
	v->a[77897] = sym_expansion;
	v->a[77898] = sym_command_substitution;
	v->a[77899] = 6;
	small_parse_table_3895(v);
}

/* EOF small_parse_table_778.c */
