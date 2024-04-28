/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_138.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_690(t_small_parse_table_array *v)
{
	v->a[13800] = actions(3254);
	v->a[13801] = 1;
	v->a[13802] = anon_sym_DOLLAR_LPAREN;
	v->a[13803] = actions(3257);
	v->a[13804] = 1;
	v->a[13805] = anon_sym_BQUOTE;
	v->a[13806] = actions(3260);
	v->a[13807] = 1;
	v->a[13808] = anon_sym_DOLLAR_BQUOTE;
	v->a[13809] = actions(3266);
	v->a[13810] = 1;
	v->a[13811] = sym_test_operator;
	v->a[13812] = actions(3269);
	v->a[13813] = 1;
	v->a[13814] = sym__brace_start;
	v->a[13815] = state(2161);
	v->a[13816] = 1;
	v->a[13817] = aux_sym__literal_repeat1;
	v->a[13818] = actions(2216);
	v->a[13819] = 2;
	small_parse_table_691(v);
}

void	small_parse_table_691(t_small_parse_table_array *v)
{
	v->a[13820] = sym_file_descriptor;
	v->a[13821] = aux_sym_heredoc_redirect_token1;
	v->a[13822] = actions(3230);
	v->a[13823] = 2;
	v->a[13824] = anon_sym_LPAREN_LPAREN;
	v->a[13825] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13826] = actions(3263);
	v->a[13827] = 2;
	v->a[13828] = anon_sym_LT_LPAREN;
	v->a[13829] = anon_sym_GT_LPAREN;
	v->a[13830] = state(672);
	v->a[13831] = 2;
	v->a[13832] = sym_concatenation;
	v->a[13833] = aux_sym_for_statement_repeat1;
	v->a[13834] = actions(3227);
	v->a[13835] = 3;
	v->a[13836] = sym_raw_string;
	v->a[13837] = sym_ansi_c_string;
	v->a[13838] = sym_word;
	v->a[13839] = state(1711);
	small_parse_table_692(v);
}

void	small_parse_table_692(t_small_parse_table_array *v)
{
	v->a[13840] = 9;
	v->a[13841] = sym_arithmetic_expansion;
	v->a[13842] = sym_brace_expression;
	v->a[13843] = sym_string;
	v->a[13844] = sym_translated_string;
	v->a[13845] = sym_number;
	v->a[13846] = sym_simple_expansion;
	v->a[13847] = sym_expansion;
	v->a[13848] = sym_command_substitution;
	v->a[13849] = sym_process_substitution;
	v->a[13850] = actions(2214);
	v->a[13851] = 21;
	v->a[13852] = anon_sym_SEMI;
	v->a[13853] = anon_sym_PIPE_PIPE;
	v->a[13854] = anon_sym_AMP_AMP;
	v->a[13855] = anon_sym_PIPE;
	v->a[13856] = anon_sym_AMP;
	v->a[13857] = anon_sym_LT;
	v->a[13858] = anon_sym_GT;
	v->a[13859] = anon_sym_LT_LT;
	small_parse_table_693(v);
}

void	small_parse_table_693(t_small_parse_table_array *v)
{
	v->a[13860] = anon_sym_GT_GT;
	v->a[13861] = anon_sym_RPAREN;
	v->a[13862] = anon_sym_SEMI_SEMI;
	v->a[13863] = anon_sym_PIPE_AMP;
	v->a[13864] = anon_sym_AMP_GT;
	v->a[13865] = anon_sym_AMP_GT_GT;
	v->a[13866] = anon_sym_LT_AMP;
	v->a[13867] = anon_sym_GT_AMP;
	v->a[13868] = anon_sym_GT_PIPE;
	v->a[13869] = anon_sym_LT_AMP_DASH;
	v->a[13870] = anon_sym_GT_AMP_DASH;
	v->a[13871] = anon_sym_LT_LT_DASH;
	v->a[13872] = anon_sym_LT_LT_LT;
	v->a[13873] = 6;
	v->a[13874] = actions(3);
	v->a[13875] = 1;
	v->a[13876] = sym_comment;
	v->a[13877] = state(1744);
	v->a[13878] = 1;
	v->a[13879] = aux_sym__literal_repeat1;
	small_parse_table_694(v);
}

void	small_parse_table_694(t_small_parse_table_array *v)
{
	v->a[13880] = state(704);
	v->a[13881] = 2;
	v->a[13882] = sym_concatenation;
	v->a[13883] = aux_sym_for_statement_repeat1;
	v->a[13884] = actions(2074);
	v->a[13885] = 5;
	v->a[13886] = sym_file_descriptor;
	v->a[13887] = sym_variable_name;
	v->a[13888] = sym_test_operator;
	v->a[13889] = sym__brace_start;
	v->a[13890] = aux_sym_heredoc_redirect_token1;
	v->a[13891] = state(1688);
	v->a[13892] = 9;
	v->a[13893] = sym_arithmetic_expansion;
	v->a[13894] = sym_brace_expression;
	v->a[13895] = sym_string;
	v->a[13896] = sym_translated_string;
	v->a[13897] = sym_number;
	v->a[13898] = sym_simple_expansion;
	v->a[13899] = sym_expansion;
	small_parse_table_695(v);
}

/* EOF small_parse_table_138.c */
