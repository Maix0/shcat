/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_597.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2985(t_small_parse_table_array *v)
{
	v->a[59700] = anon_sym_AMP_GT_GT;
	v->a[59701] = anon_sym_LT_AMP;
	v->a[59702] = anon_sym_GT_AMP;
	v->a[59703] = anon_sym_GT_PIPE;
	v->a[59704] = anon_sym_LT_AMP_DASH;
	v->a[59705] = anon_sym_GT_AMP_DASH;
	v->a[59706] = anon_sym_LT_LT_DASH;
	v->a[59707] = anon_sym_LT_LT_LT;
	v->a[59708] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59709] = anon_sym_DOLLAR_LBRACK;
	v->a[59710] = anon_sym_DOLLAR;
	v->a[59711] = sym__special_character;
	v->a[59712] = anon_sym_DQUOTE;
	v->a[59713] = sym_raw_string;
	v->a[59714] = sym_ansi_c_string;
	v->a[59715] = aux_sym_number_token1;
	v->a[59716] = aux_sym_number_token2;
	v->a[59717] = anon_sym_DOLLAR_LBRACE;
	v->a[59718] = anon_sym_DOLLAR_LPAREN;
	v->a[59719] = anon_sym_BQUOTE;
	small_parse_table_2986(v);
}

void	small_parse_table_2986(t_small_parse_table_array *v)
{
	v->a[59720] = anon_sym_DOLLAR_BQUOTE;
	v->a[59721] = anon_sym_LT_LPAREN;
	v->a[59722] = anon_sym_GT_LPAREN;
	v->a[59723] = sym_word;
	v->a[59724] = 21;
	v->a[59725] = actions(3);
	v->a[59726] = 1;
	v->a[59727] = sym_comment;
	v->a[59728] = actions(5608);
	v->a[59729] = 1;
	v->a[59730] = anon_sym_DOLLAR_LBRACK;
	v->a[59731] = actions(5610);
	v->a[59732] = 1;
	v->a[59733] = anon_sym_DOLLAR;
	v->a[59734] = actions(5612);
	v->a[59735] = 1;
	v->a[59736] = sym__special_character;
	v->a[59737] = actions(5614);
	v->a[59738] = 1;
	v->a[59739] = anon_sym_DQUOTE;
	small_parse_table_2987(v);
}

void	small_parse_table_2987(t_small_parse_table_array *v)
{
	v->a[59740] = actions(5616);
	v->a[59741] = 1;
	v->a[59742] = aux_sym_number_token1;
	v->a[59743] = actions(5618);
	v->a[59744] = 1;
	v->a[59745] = aux_sym_number_token2;
	v->a[59746] = actions(5620);
	v->a[59747] = 1;
	v->a[59748] = anon_sym_DOLLAR_LBRACE;
	v->a[59749] = actions(5622);
	v->a[59750] = 1;
	v->a[59751] = anon_sym_DOLLAR_LPAREN;
	v->a[59752] = actions(5624);
	v->a[59753] = 1;
	v->a[59754] = anon_sym_BQUOTE;
	v->a[59755] = actions(5626);
	v->a[59756] = 1;
	v->a[59757] = anon_sym_DOLLAR_BQUOTE;
	v->a[59758] = actions(5630);
	v->a[59759] = 1;
	small_parse_table_2988(v);
}

void	small_parse_table_2988(t_small_parse_table_array *v)
{
	v->a[59760] = sym_test_operator;
	v->a[59761] = actions(5632);
	v->a[59762] = 1;
	v->a[59763] = sym__brace_start;
	v->a[59764] = state(3469);
	v->a[59765] = 1;
	v->a[59766] = aux_sym__literal_repeat1;
	v->a[59767] = actions(2096);
	v->a[59768] = 2;
	v->a[59769] = sym_file_descriptor;
	v->a[59770] = aux_sym_heredoc_redirect_token1;
	v->a[59771] = actions(5606);
	v->a[59772] = 2;
	v->a[59773] = anon_sym_LPAREN_LPAREN;
	v->a[59774] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59775] = actions(5628);
	v->a[59776] = 2;
	v->a[59777] = anon_sym_LT_LPAREN;
	v->a[59778] = anon_sym_GT_LPAREN;
	v->a[59779] = state(1314);
	small_parse_table_2989(v);
}

void	small_parse_table_2989(t_small_parse_table_array *v)
{
	v->a[59780] = 2;
	v->a[59781] = sym_concatenation;
	v->a[59782] = aux_sym_for_statement_repeat1;
	v->a[59783] = actions(5604);
	v->a[59784] = 3;
	v->a[59785] = sym_raw_string;
	v->a[59786] = sym_ansi_c_string;
	v->a[59787] = sym_word;
	v->a[59788] = state(3093);
	v->a[59789] = 9;
	v->a[59790] = sym_arithmetic_expansion;
	v->a[59791] = sym_brace_expression;
	v->a[59792] = sym_string;
	v->a[59793] = sym_translated_string;
	v->a[59794] = sym_number;
	v->a[59795] = sym_simple_expansion;
	v->a[59796] = sym_expansion;
	v->a[59797] = sym_command_substitution;
	v->a[59798] = sym_process_substitution;
	v->a[59799] = actions(2094);
	small_parse_table_2990(v);
}

/* EOF small_parse_table_597.c */
