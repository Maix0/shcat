/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_458.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2290(t_small_parse_table_array *v)
{
	v->a[45800] = anon_sym_LT_AMP;
	v->a[45801] = anon_sym_GT_AMP;
	v->a[45802] = anon_sym_GT_PIPE;
	v->a[45803] = anon_sym_LT_GT;
	v->a[45804] = anon_sym_LT_LT;
	v->a[45805] = anon_sym_LT_LT_DASH;
	v->a[45806] = anon_sym_BQUOTE;
	v->a[45807] = anon_sym_SEMI;
	v->a[45808] = 6;
	v->a[45809] = actions(3);
	v->a[45810] = 1;
	v->a[45811] = sym_comment;
	v->a[45812] = actions(1618);
	v->a[45813] = 1;
	v->a[45814] = sym_variable_name;
	v->a[45815] = state(1073);
	v->a[45816] = 1;
	v->a[45817] = sym_file_redirect;
	v->a[45818] = state(823);
	v->a[45819] = 2;
	small_parse_table_2291(v);
}

void	small_parse_table_2291(t_small_parse_table_array *v)
{
	v->a[45820] = sym_variable_assignment;
	v->a[45821] = aux_sym_command_repeat1;
	v->a[45822] = actions(1615);
	v->a[45823] = 7;
	v->a[45824] = anon_sym_LT;
	v->a[45825] = anon_sym_GT;
	v->a[45826] = anon_sym_GT_GT;
	v->a[45827] = anon_sym_LT_AMP;
	v->a[45828] = anon_sym_GT_AMP;
	v->a[45829] = anon_sym_GT_PIPE;
	v->a[45830] = anon_sym_LT_GT;
	v->a[45831] = actions(1613);
	v->a[45832] = 9;
	v->a[45833] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45834] = anon_sym_DOLLAR;
	v->a[45835] = anon_sym_DQUOTE;
	v->a[45836] = sym_raw_string;
	v->a[45837] = sym_number;
	v->a[45838] = anon_sym_DOLLAR_LBRACE;
	v->a[45839] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2292(v);
}

void	small_parse_table_2292(t_small_parse_table_array *v)
{
	v->a[45840] = anon_sym_BQUOTE;
	v->a[45841] = sym_word;
	v->a[45842] = 10;
	v->a[45843] = actions(3);
	v->a[45844] = 1;
	v->a[45845] = sym_comment;
	v->a[45846] = actions(746);
	v->a[45847] = 1;
	v->a[45848] = anon_sym_PIPE;
	v->a[45849] = actions(842);
	v->a[45850] = 1;
	v->a[45851] = anon_sym_BQUOTE;
	v->a[45852] = actions(1591);
	v->a[45853] = 1;
	v->a[45854] = aux_sym_heredoc_redirect_token1;
	v->a[45855] = state(646);
	v->a[45856] = 1;
	v->a[45857] = sym_terminator;
	v->a[45858] = actions(850);
	v->a[45859] = 2;
	small_parse_table_2293(v);
}

void	small_parse_table_2293(t_small_parse_table_array *v)
{
	v->a[45860] = anon_sym_LT_LT;
	v->a[45861] = anon_sym_LT_LT_DASH;
	v->a[45862] = actions(858);
	v->a[45863] = 2;
	v->a[45864] = anon_sym_SEMI_SEMI;
	v->a[45865] = anon_sym_SEMI;
	v->a[45866] = actions(909);
	v->a[45867] = 2;
	v->a[45868] = anon_sym_AMP_AMP;
	v->a[45869] = anon_sym_PIPE_PIPE;
	v->a[45870] = state(970);
	v->a[45871] = 3;
	v->a[45872] = sym_file_redirect;
	v->a[45873] = sym_heredoc_redirect;
	v->a[45874] = aux_sym_redirected_statement_repeat1;
	v->a[45875] = actions(1589);
	v->a[45876] = 7;
	v->a[45877] = anon_sym_LT;
	v->a[45878] = anon_sym_GT;
	v->a[45879] = anon_sym_GT_GT;
	small_parse_table_2294(v);
}

void	small_parse_table_2294(t_small_parse_table_array *v)
{
	v->a[45880] = anon_sym_LT_AMP;
	v->a[45881] = anon_sym_GT_AMP;
	v->a[45882] = anon_sym_GT_PIPE;
	v->a[45883] = anon_sym_LT_GT;
	v->a[45884] = 10;
	v->a[45885] = actions(3);
	v->a[45886] = 1;
	v->a[45887] = sym_comment;
	v->a[45888] = actions(746);
	v->a[45889] = 1;
	v->a[45890] = anon_sym_PIPE;
	v->a[45891] = actions(842);
	v->a[45892] = 1;
	v->a[45893] = anon_sym_BQUOTE;
	v->a[45894] = actions(1591);
	v->a[45895] = 1;
	v->a[45896] = aux_sym_heredoc_redirect_token1;
	v->a[45897] = state(642);
	v->a[45898] = 1;
	v->a[45899] = sym_terminator;
	small_parse_table_2295(v);
}

/* EOF small_parse_table_458.c */
