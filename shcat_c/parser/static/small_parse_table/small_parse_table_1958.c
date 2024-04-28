/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1958.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9790(t_small_parse_table_array *v)
{
	v->a[195800] = 9;
	v->a[195801] = anon_sym_DASH;
	v->a[195802] = anon_sym_STAR;
	v->a[195803] = anon_sym_BANG;
	v->a[195804] = anon_sym_QMARK;
	v->a[195805] = anon_sym_DOLLAR;
	v->a[195806] = anon_sym_POUND;
	v->a[195807] = anon_sym_AT2;
	v->a[195808] = anon_sym_0;
	v->a[195809] = anon_sym__;
	v->a[195810] = actions(1239);
	v->a[195811] = 17;
	v->a[195812] = anon_sym_PIPE_PIPE;
	v->a[195813] = anon_sym_AMP_AMP;
	v->a[195814] = anon_sym_PIPE;
	v->a[195815] = anon_sym_LT;
	v->a[195816] = anon_sym_GT;
	v->a[195817] = anon_sym_LT_LT;
	v->a[195818] = anon_sym_GT_GT;
	v->a[195819] = anon_sym_PIPE_AMP;
	small_parse_table_9791(v);
}

void	small_parse_table_9791(t_small_parse_table_array *v)
{
	v->a[195820] = anon_sym_AMP_GT;
	v->a[195821] = anon_sym_AMP_GT_GT;
	v->a[195822] = anon_sym_LT_AMP;
	v->a[195823] = anon_sym_GT_AMP;
	v->a[195824] = anon_sym_GT_PIPE;
	v->a[195825] = anon_sym_LT_AMP_DASH;
	v->a[195826] = anon_sym_GT_AMP_DASH;
	v->a[195827] = anon_sym_LT_LT_DASH;
	v->a[195828] = aux_sym_heredoc_redirect_token1;
	v->a[195829] = 3;
	v->a[195830] = actions(71);
	v->a[195831] = 1;
	v->a[195832] = sym_comment;
	v->a[195833] = actions(5373);
	v->a[195834] = 10;
	v->a[195835] = anon_sym_LT;
	v->a[195836] = anon_sym_GT;
	v->a[195837] = anon_sym_AMP_GT;
	v->a[195838] = anon_sym_LT_AMP;
	v->a[195839] = anon_sym_GT_AMP;
	small_parse_table_9792(v);
}

void	small_parse_table_9792(t_small_parse_table_array *v)
{
	v->a[195840] = anon_sym_DOLLAR;
	v->a[195841] = aux_sym_number_token1;
	v->a[195842] = aux_sym_number_token2;
	v->a[195843] = anon_sym_DOLLAR_LPAREN;
	v->a[195844] = sym_word;
	v->a[195845] = actions(5375);
	v->a[195846] = 22;
	v->a[195847] = sym_file_descriptor;
	v->a[195848] = sym_variable_name;
	v->a[195849] = sym_test_operator;
	v->a[195850] = sym__brace_start;
	v->a[195851] = anon_sym_LPAREN_LPAREN;
	v->a[195852] = anon_sym_GT_GT;
	v->a[195853] = anon_sym_AMP_GT_GT;
	v->a[195854] = anon_sym_GT_PIPE;
	v->a[195855] = anon_sym_LT_AMP_DASH;
	v->a[195856] = anon_sym_GT_AMP_DASH;
	v->a[195857] = anon_sym_LT_LT_LT;
	v->a[195858] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[195859] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_9793(v);
}

void	small_parse_table_9793(t_small_parse_table_array *v)
{
	v->a[195860] = sym__special_character;
	v->a[195861] = anon_sym_DQUOTE;
	v->a[195862] = sym_raw_string;
	v->a[195863] = sym_ansi_c_string;
	v->a[195864] = anon_sym_DOLLAR_LBRACE;
	v->a[195865] = anon_sym_BQUOTE;
	v->a[195866] = anon_sym_DOLLAR_BQUOTE;
	v->a[195867] = anon_sym_LT_LPAREN;
	v->a[195868] = anon_sym_GT_LPAREN;
	v->a[195869] = 21;
	v->a[195870] = actions(71);
	v->a[195871] = 1;
	v->a[195872] = sym_comment;
	v->a[195873] = actions(8565);
	v->a[195874] = 1;
	v->a[195875] = sym_word;
	v->a[195876] = actions(8571);
	v->a[195877] = 1;
	v->a[195878] = anon_sym_DOLLAR_LBRACK;
	v->a[195879] = actions(8573);
	small_parse_table_9794(v);
}

void	small_parse_table_9794(t_small_parse_table_array *v)
{
	v->a[195880] = 1;
	v->a[195881] = anon_sym_DOLLAR;
	v->a[195882] = actions(8575);
	v->a[195883] = 1;
	v->a[195884] = sym__special_character;
	v->a[195885] = actions(8577);
	v->a[195886] = 1;
	v->a[195887] = anon_sym_DQUOTE;
	v->a[195888] = actions(8581);
	v->a[195889] = 1;
	v->a[195890] = aux_sym_number_token1;
	v->a[195891] = actions(8583);
	v->a[195892] = 1;
	v->a[195893] = aux_sym_number_token2;
	v->a[195894] = actions(8585);
	v->a[195895] = 1;
	v->a[195896] = anon_sym_DOLLAR_LBRACE;
	v->a[195897] = actions(8587);
	v->a[195898] = 1;
	v->a[195899] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_9795(v);
}

/* EOF small_parse_table_1958.c */
