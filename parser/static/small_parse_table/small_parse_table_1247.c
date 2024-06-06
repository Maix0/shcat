/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1247.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6235(t_small_parse_table_array *v)
{
	v->a[124700] = actions(3034);
	v->a[124701] = 4;
	v->a[124702] = sym__concat;
	v->a[124703] = sym_test_operator;
	v->a[124704] = sym__brace_start;
	v->a[124705] = aux_sym_heredoc_redirect_token1;
	v->a[124706] = actions(3032);
	v->a[124707] = 16;
	v->a[124708] = anon_sym_SEMI_SEMI;
	v->a[124709] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[124710] = anon_sym_AMP;
	v->a[124711] = aux_sym_concatenation_token1;
	v->a[124712] = anon_sym_DOLLAR;
	v->a[124713] = sym__special_character;
	v->a[124714] = anon_sym_DQUOTE;
	v->a[124715] = sym_raw_string;
	v->a[124716] = aux_sym_number_token1;
	v->a[124717] = aux_sym_number_token2;
	v->a[124718] = anon_sym_DOLLAR_LBRACE;
	v->a[124719] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_6236(v);
}

void	small_parse_table_6236(t_small_parse_table_array *v)
{
	v->a[124720] = anon_sym_BQUOTE;
	v->a[124721] = anon_sym_DOLLAR_BQUOTE;
	v->a[124722] = sym_word;
	v->a[124723] = anon_sym_SEMI;
	v->a[124724] = 3;
	v->a[124725] = actions(3);
	v->a[124726] = 1;
	v->a[124727] = sym_comment;
	v->a[124728] = actions(2828);
	v->a[124729] = 4;
	v->a[124730] = sym__concat;
	v->a[124731] = sym_test_operator;
	v->a[124732] = sym__brace_start;
	v->a[124733] = aux_sym_heredoc_redirect_token1;
	v->a[124734] = actions(2826);
	v->a[124735] = 16;
	v->a[124736] = anon_sym_SEMI_SEMI;
	v->a[124737] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[124738] = anon_sym_AMP;
	v->a[124739] = aux_sym_concatenation_token1;
	small_parse_table_6237(v);
}

void	small_parse_table_6237(t_small_parse_table_array *v)
{
	v->a[124740] = anon_sym_DOLLAR;
	v->a[124741] = sym__special_character;
	v->a[124742] = anon_sym_DQUOTE;
	v->a[124743] = sym_raw_string;
	v->a[124744] = aux_sym_number_token1;
	v->a[124745] = aux_sym_number_token2;
	v->a[124746] = anon_sym_DOLLAR_LBRACE;
	v->a[124747] = anon_sym_DOLLAR_LPAREN;
	v->a[124748] = anon_sym_BQUOTE;
	v->a[124749] = anon_sym_DOLLAR_BQUOTE;
	v->a[124750] = sym_word;
	v->a[124751] = anon_sym_SEMI;
	v->a[124752] = 5;
	v->a[124753] = actions(57);
	v->a[124754] = 1;
	v->a[124755] = sym_comment;
	v->a[124756] = actions(7153);
	v->a[124757] = 1;
	v->a[124758] = sym_variable_name;
	v->a[124759] = state(2648);
	small_parse_table_6238(v);
}

void	small_parse_table_6238(t_small_parse_table_array *v)
{
	v->a[124760] = 2;
	v->a[124761] = sym_variable_assignment;
	v->a[124762] = aux_sym_variable_assignments_repeat1;
	v->a[124763] = actions(5143);
	v->a[124764] = 7;
	v->a[124765] = anon_sym_PIPE;
	v->a[124766] = anon_sym_LT;
	v->a[124767] = anon_sym_GT;
	v->a[124768] = anon_sym_AMP_GT;
	v->a[124769] = anon_sym_LT_AMP;
	v->a[124770] = anon_sym_GT_AMP;
	v->a[124771] = anon_sym_LT_LT;
	v->a[124772] = actions(5145);
	v->a[124773] = 10;
	v->a[124774] = sym_file_descriptor;
	v->a[124775] = anon_sym_PIPE_AMP;
	v->a[124776] = anon_sym_AMP_AMP;
	v->a[124777] = anon_sym_PIPE_PIPE;
	v->a[124778] = anon_sym_GT_GT;
	v->a[124779] = anon_sym_AMP_GT_GT;
	small_parse_table_6239(v);
}

void	small_parse_table_6239(t_small_parse_table_array *v)
{
	v->a[124780] = anon_sym_GT_PIPE;
	v->a[124781] = anon_sym_LT_AMP_DASH;
	v->a[124782] = anon_sym_GT_AMP_DASH;
	v->a[124783] = anon_sym_LT_LT_DASH;
	v->a[124784] = 5;
	v->a[124785] = actions(57);
	v->a[124786] = 1;
	v->a[124787] = sym_comment;
	v->a[124788] = state(2626);
	v->a[124789] = 1;
	v->a[124790] = aux_sym_concatenation_repeat1;
	v->a[124791] = actions(7116);
	v->a[124792] = 2;
	v->a[124793] = sym__concat;
	v->a[124794] = aux_sym_concatenation_token1;
	v->a[124795] = actions(1388);
	v->a[124796] = 7;
	v->a[124797] = anon_sym_PIPE;
	v->a[124798] = anon_sym_LT;
	v->a[124799] = anon_sym_GT;
	small_parse_table_6240(v);
}

/* EOF small_parse_table_1247.c */
