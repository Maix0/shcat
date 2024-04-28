/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2407.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12035(t_small_parse_table_array *v)
{
	v->a[240700] = anon_sym_SEMI_AMP;
	v->a[240701] = anon_sym_SEMI_SEMI_AMP;
	v->a[240702] = anon_sym_PIPE_AMP;
	v->a[240703] = anon_sym_AMP_GT;
	v->a[240704] = anon_sym_AMP_GT_GT;
	v->a[240705] = anon_sym_LT_AMP;
	v->a[240706] = anon_sym_GT_AMP;
	v->a[240707] = anon_sym_GT_PIPE;
	v->a[240708] = anon_sym_LT_AMP_DASH;
	v->a[240709] = anon_sym_GT_AMP_DASH;
	v->a[240710] = anon_sym_LT_LT_DASH;
	v->a[240711] = anon_sym_LT_LT_LT;
	v->a[240712] = 21;
	v->a[240713] = actions(3);
	v->a[240714] = 1;
	v->a[240715] = sym_comment;
	v->a[240716] = actions(11250);
	v->a[240717] = 1;
	v->a[240718] = anon_sym_LPAREN;
	v->a[240719] = actions(11252);
	small_parse_table_12036(v);
}

void	small_parse_table_12036(t_small_parse_table_array *v)
{
	v->a[240720] = 1;
	v->a[240721] = aux_sym__c_word_token1;
	v->a[240722] = actions(11256);
	v->a[240723] = 1;
	v->a[240724] = anon_sym_DOLLAR;
	v->a[240725] = actions(11258);
	v->a[240726] = 1;
	v->a[240727] = anon_sym_DQUOTE;
	v->a[240728] = actions(11260);
	v->a[240729] = 1;
	v->a[240730] = aux_sym_number_token1;
	v->a[240731] = actions(11262);
	v->a[240732] = 1;
	v->a[240733] = aux_sym_number_token2;
	v->a[240734] = actions(11264);
	v->a[240735] = 1;
	v->a[240736] = anon_sym_DOLLAR_LBRACE;
	v->a[240737] = actions(11266);
	v->a[240738] = 1;
	v->a[240739] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_12037(v);
}

void	small_parse_table_12037(t_small_parse_table_array *v)
{
	v->a[240740] = actions(11268);
	v->a[240741] = 1;
	v->a[240742] = anon_sym_BQUOTE;
	v->a[240743] = actions(11270);
	v->a[240744] = 1;
	v->a[240745] = anon_sym_DOLLAR_BQUOTE;
	v->a[240746] = actions(11341);
	v->a[240747] = 1;
	v->a[240748] = aux_sym_heredoc_redirect_token1;
	v->a[240749] = state(3113);
	v->a[240750] = 1;
	v->a[240751] = sym__c_postfix_expression;
	v->a[240752] = state(3116);
	v->a[240753] = 1;
	v->a[240754] = sym__c_binary_expression;
	v->a[240755] = state(3118);
	v->a[240756] = 1;
	v->a[240757] = sym__c_unary_expression;
	v->a[240758] = state(4721);
	v->a[240759] = 1;
	small_parse_table_12038(v);
}

void	small_parse_table_12038(t_small_parse_table_array *v)
{
	v->a[240760] = sym__c_terminator;
	v->a[240761] = state(6300);
	v->a[240762] = 1;
	v->a[240763] = sym__c_expression;
	v->a[240764] = state(6493);
	v->a[240765] = 1;
	v->a[240766] = sym__c_variable_assignment;
	v->a[240767] = actions(11248);
	v->a[240768] = 2;
	v->a[240769] = anon_sym_PLUS_PLUS;
	v->a[240770] = anon_sym_DASH_DASH;
	v->a[240771] = actions(11339);
	v->a[240772] = 2;
	v->a[240773] = anon_sym_SEMI;
	v->a[240774] = anon_sym_AMP;
	v->a[240775] = state(3119);
	v->a[240776] = 7;
	v->a[240777] = sym__c_expression_not_assignment;
	v->a[240778] = sym__c_parenthesized_expression;
	v->a[240779] = sym_string;
	small_parse_table_12039(v);
}

void	small_parse_table_12039(t_small_parse_table_array *v)
{
	v->a[240780] = sym_number;
	v->a[240781] = sym_simple_expansion;
	v->a[240782] = sym_expansion;
	v->a[240783] = sym_command_substitution;
	v->a[240784] = 6;
	v->a[240785] = actions(3);
	v->a[240786] = 1;
	v->a[240787] = sym_comment;
	v->a[240788] = actions(11272);
	v->a[240789] = 1;
	v->a[240790] = aux_sym_concatenation_token1;
	v->a[240791] = actions(11274);
	v->a[240792] = 1;
	v->a[240793] = sym__concat;
	v->a[240794] = state(4245);
	v->a[240795] = 1;
	v->a[240796] = aux_sym_concatenation_repeat1;
	v->a[240797] = actions(4372);
	v->a[240798] = 2;
	v->a[240799] = sym_file_descriptor;
	small_parse_table_12040(v);
}

/* EOF small_parse_table_2407.c */
