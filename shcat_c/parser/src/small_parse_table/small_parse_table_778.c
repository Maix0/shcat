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
	v->a[77800] = aux_sym_number_token1;
	v->a[77801] = aux_sym_number_token2;
	v->a[77802] = anon_sym_DOLLAR_LBRACE;
	v->a[77803] = anon_sym_DOLLAR_LPAREN;
	v->a[77804] = anon_sym_BQUOTE;
	v->a[77805] = anon_sym_DOLLAR_BQUOTE;
	v->a[77806] = anon_sym_LT_LPAREN;
	v->a[77807] = anon_sym_GT_LPAREN;
	v->a[77808] = aux_sym__simple_variable_name_token1;
	v->a[77809] = sym_word;
	v->a[77810] = 6;
	v->a[77811] = actions(3);
	v->a[77812] = 1;
	v->a[77813] = sym_comment;
	v->a[77814] = actions(4699);
	v->a[77815] = 1;
	v->a[77816] = aux_sym_concatenation_token1;
	v->a[77817] = actions(4701);
	v->a[77818] = 1;
	v->a[77819] = sym__concat;
	small_parse_table_3891(v);
}

void	small_parse_table_3891(t_small_parse_table_array *v)
{
	v->a[77820] = state(1715);
	v->a[77821] = 1;
	v->a[77822] = aux_sym_concatenation_repeat1;
	v->a[77823] = actions(278);
	v->a[77824] = 5;
	v->a[77825] = sym_file_descriptor;
	v->a[77826] = sym_test_operator;
	v->a[77827] = sym__bare_dollar;
	v->a[77828] = sym__brace_start;
	v->a[77829] = aux_sym_heredoc_redirect_token1;
	v->a[77830] = actions(241);
	v->a[77831] = 37;
	v->a[77832] = anon_sym_LPAREN_LPAREN;
	v->a[77833] = anon_sym_PIPE_PIPE;
	v->a[77834] = anon_sym_AMP_AMP;
	v->a[77835] = anon_sym_PIPE;
	v->a[77836] = anon_sym_EQ_EQ;
	v->a[77837] = anon_sym_LT;
	v->a[77838] = anon_sym_GT;
	v->a[77839] = anon_sym_LT_LT;
	small_parse_table_3892(v);
}

void	small_parse_table_3892(t_small_parse_table_array *v)
{
	v->a[77840] = anon_sym_GT_GT;
	v->a[77841] = anon_sym_LPAREN;
	v->a[77842] = anon_sym_PIPE_AMP;
	v->a[77843] = anon_sym_EQ_TILDE;
	v->a[77844] = anon_sym_AMP_GT;
	v->a[77845] = anon_sym_AMP_GT_GT;
	v->a[77846] = anon_sym_LT_AMP;
	v->a[77847] = anon_sym_GT_AMP;
	v->a[77848] = anon_sym_GT_PIPE;
	v->a[77849] = anon_sym_LT_AMP_DASH;
	v->a[77850] = anon_sym_GT_AMP_DASH;
	v->a[77851] = anon_sym_LT_LT_DASH;
	v->a[77852] = anon_sym_LT_LT_LT;
	v->a[77853] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77854] = anon_sym_DOLLAR_LBRACK;
	v->a[77855] = anon_sym_DOLLAR;
	v->a[77856] = sym__special_character;
	v->a[77857] = anon_sym_DQUOTE;
	v->a[77858] = sym_raw_string;
	v->a[77859] = sym_ansi_c_string;
	small_parse_table_3893(v);
}

void	small_parse_table_3893(t_small_parse_table_array *v)
{
	v->a[77860] = aux_sym_number_token1;
	v->a[77861] = aux_sym_number_token2;
	v->a[77862] = anon_sym_DOLLAR_LBRACE;
	v->a[77863] = anon_sym_DOLLAR_LPAREN;
	v->a[77864] = anon_sym_BQUOTE;
	v->a[77865] = anon_sym_DOLLAR_BQUOTE;
	v->a[77866] = anon_sym_LT_LPAREN;
	v->a[77867] = anon_sym_GT_LPAREN;
	v->a[77868] = sym_word;
	v->a[77869] = 21;
	v->a[77870] = actions(3);
	v->a[77871] = 1;
	v->a[77872] = sym_comment;
	v->a[77873] = actions(5868);
	v->a[77874] = 1;
	v->a[77875] = anon_sym_DOLLAR_LBRACK;
	v->a[77876] = actions(5870);
	v->a[77877] = 1;
	v->a[77878] = anon_sym_DOLLAR;
	v->a[77879] = actions(5872);
	small_parse_table_3894(v);
}

void	small_parse_table_3894(t_small_parse_table_array *v)
{
	v->a[77880] = 1;
	v->a[77881] = sym__special_character;
	v->a[77882] = actions(5874);
	v->a[77883] = 1;
	v->a[77884] = anon_sym_DQUOTE;
	v->a[77885] = actions(5876);
	v->a[77886] = 1;
	v->a[77887] = aux_sym_number_token1;
	v->a[77888] = actions(5878);
	v->a[77889] = 1;
	v->a[77890] = aux_sym_number_token2;
	v->a[77891] = actions(5880);
	v->a[77892] = 1;
	v->a[77893] = anon_sym_DOLLAR_LBRACE;
	v->a[77894] = actions(5882);
	v->a[77895] = 1;
	v->a[77896] = anon_sym_DOLLAR_LPAREN;
	v->a[77897] = actions(5884);
	v->a[77898] = 1;
	v->a[77899] = anon_sym_BQUOTE;
	small_parse_table_3895(v);
}

/* EOF small_parse_table_778.c */
