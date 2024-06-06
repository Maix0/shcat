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
	v->a[13800] = sym_number;
	v->a[13801] = sym_simple_expansion;
	v->a[13802] = sym_expansion;
	v->a[13803] = sym_command_substitution;
	v->a[13804] = actions(1528);
	v->a[13805] = 31;
	v->a[13806] = anon_sym_PIPE;
	v->a[13807] = anon_sym_SEMI_SEMI;
	v->a[13808] = anon_sym_PIPE_AMP;
	v->a[13809] = anon_sym_AMP_AMP;
	v->a[13810] = anon_sym_PIPE_PIPE;
	v->a[13811] = anon_sym_LT;
	v->a[13812] = anon_sym_GT;
	v->a[13813] = anon_sym_GT_GT;
	v->a[13814] = anon_sym_AMP_GT;
	v->a[13815] = anon_sym_AMP_GT_GT;
	v->a[13816] = anon_sym_LT_AMP;
	v->a[13817] = anon_sym_GT_AMP;
	v->a[13818] = anon_sym_GT_PIPE;
	v->a[13819] = anon_sym_LT_AMP_DASH;
	small_parse_table_691(v);
}

void	small_parse_table_691(t_small_parse_table_array *v)
{
	v->a[13820] = anon_sym_GT_AMP_DASH;
	v->a[13821] = anon_sym_LT_LT;
	v->a[13822] = anon_sym_LT_LT_DASH;
	v->a[13823] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13824] = anon_sym_AMP;
	v->a[13825] = anon_sym_DOLLAR;
	v->a[13826] = sym__special_character;
	v->a[13827] = anon_sym_DQUOTE;
	v->a[13828] = sym_raw_string;
	v->a[13829] = aux_sym_number_token1;
	v->a[13830] = aux_sym_number_token2;
	v->a[13831] = anon_sym_DOLLAR_LBRACE;
	v->a[13832] = anon_sym_DOLLAR_LPAREN;
	v->a[13833] = anon_sym_BQUOTE;
	v->a[13834] = anon_sym_DOLLAR_BQUOTE;
	v->a[13835] = sym_word;
	v->a[13836] = anon_sym_SEMI;
	v->a[13837] = 21;
	v->a[13838] = actions(3);
	v->a[13839] = 1;
	small_parse_table_692(v);
}

void	small_parse_table_692(t_small_parse_table_array *v)
{
	v->a[13840] = sym_comment;
	v->a[13841] = actions(1009);
	v->a[13842] = 1;
	v->a[13843] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13844] = actions(1011);
	v->a[13845] = 1;
	v->a[13846] = anon_sym_DOLLAR;
	v->a[13847] = actions(1015);
	v->a[13848] = 1;
	v->a[13849] = anon_sym_DQUOTE;
	v->a[13850] = actions(1017);
	v->a[13851] = 1;
	v->a[13852] = aux_sym_number_token1;
	v->a[13853] = actions(1019);
	v->a[13854] = 1;
	v->a[13855] = aux_sym_number_token2;
	v->a[13856] = actions(1021);
	v->a[13857] = 1;
	v->a[13858] = anon_sym_DOLLAR_LBRACE;
	v->a[13859] = actions(1023);
	small_parse_table_693(v);
}

void	small_parse_table_693(t_small_parse_table_array *v)
{
	v->a[13860] = 1;
	v->a[13861] = anon_sym_DOLLAR_LPAREN;
	v->a[13862] = actions(1025);
	v->a[13863] = 1;
	v->a[13864] = anon_sym_BQUOTE;
	v->a[13865] = actions(1027);
	v->a[13866] = 1;
	v->a[13867] = anon_sym_DOLLAR_BQUOTE;
	v->a[13868] = actions(1035);
	v->a[13869] = 1;
	v->a[13870] = sym__brace_start;
	v->a[13871] = actions(2401);
	v->a[13872] = 1;
	v->a[13873] = sym__special_character;
	v->a[13874] = actions(2405);
	v->a[13875] = 1;
	v->a[13876] = sym_variable_name;
	v->a[13877] = actions(2407);
	v->a[13878] = 1;
	v->a[13879] = sym_test_operator;
	small_parse_table_694(v);
}

void	small_parse_table_694(t_small_parse_table_array *v)
{
	v->a[13880] = actions(2419);
	v->a[13881] = 1;
	v->a[13882] = aux_sym__simple_variable_name_token1;
	v->a[13883] = state(1024);
	v->a[13884] = 1;
	v->a[13885] = aux_sym__literal_repeat1;
	v->a[13886] = actions(727);
	v->a[13887] = 2;
	v->a[13888] = sym_file_descriptor;
	v->a[13889] = aux_sym_heredoc_redirect_token1;
	v->a[13890] = actions(2399);
	v->a[13891] = 2;
	v->a[13892] = sym_raw_string;
	v->a[13893] = sym_word;
	v->a[13894] = state(439);
	v->a[13895] = 3;
	v->a[13896] = sym_variable_assignment;
	v->a[13897] = sym_concatenation;
	v->a[13898] = aux_sym_declaration_command_repeat1;
	v->a[13899] = state(1298);
	small_parse_table_695(v);
}

/* EOF small_parse_table_138.c */
