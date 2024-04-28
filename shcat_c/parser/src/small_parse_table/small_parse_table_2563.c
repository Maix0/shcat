/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2563.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12815(t_small_parse_table_array *v)
{
	v->a[256300] = anon_sym_PIPE_AMP;
	v->a[256301] = anon_sym_AMP_GT;
	v->a[256302] = anon_sym_AMP_GT_GT;
	v->a[256303] = anon_sym_LT_AMP;
	v->a[256304] = anon_sym_GT_AMP;
	v->a[256305] = anon_sym_GT_PIPE;
	v->a[256306] = anon_sym_LT_AMP_DASH;
	v->a[256307] = anon_sym_GT_AMP_DASH;
	v->a[256308] = anon_sym_LT_LT_DASH;
	v->a[256309] = 19;
	v->a[256310] = actions(71);
	v->a[256311] = 1;
	v->a[256312] = sym_comment;
	v->a[256313] = actions(11804);
	v->a[256314] = 1;
	v->a[256315] = anon_sym_RPAREN_RPAREN;
	v->a[256316] = actions(11808);
	v->a[256317] = 1;
	v->a[256318] = anon_sym_LPAREN;
	v->a[256319] = actions(11810);
	small_parse_table_12816(v);
}

void	small_parse_table_12816(t_small_parse_table_array *v)
{
	v->a[256320] = 1;
	v->a[256321] = aux_sym__c_word_token1;
	v->a[256322] = actions(11812);
	v->a[256323] = 1;
	v->a[256324] = anon_sym_DOLLAR;
	v->a[256325] = actions(11814);
	v->a[256326] = 1;
	v->a[256327] = anon_sym_DQUOTE;
	v->a[256328] = actions(11816);
	v->a[256329] = 1;
	v->a[256330] = aux_sym_number_token1;
	v->a[256331] = actions(11818);
	v->a[256332] = 1;
	v->a[256333] = aux_sym_number_token2;
	v->a[256334] = actions(11820);
	v->a[256335] = 1;
	v->a[256336] = anon_sym_DOLLAR_LBRACE;
	v->a[256337] = actions(11822);
	v->a[256338] = 1;
	v->a[256339] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_12817(v);
}

void	small_parse_table_12817(t_small_parse_table_array *v)
{
	v->a[256340] = actions(11824);
	v->a[256341] = 1;
	v->a[256342] = anon_sym_BQUOTE;
	v->a[256343] = actions(11826);
	v->a[256344] = 1;
	v->a[256345] = anon_sym_DOLLAR_BQUOTE;
	v->a[256346] = state(3285);
	v->a[256347] = 1;
	v->a[256348] = sym__c_postfix_expression;
	v->a[256349] = state(3286);
	v->a[256350] = 1;
	v->a[256351] = sym__c_binary_expression;
	v->a[256352] = state(3290);
	v->a[256353] = 1;
	v->a[256354] = sym__c_unary_expression;
	v->a[256355] = state(6702);
	v->a[256356] = 1;
	v->a[256357] = sym__c_expression;
	v->a[256358] = state(6768);
	v->a[256359] = 1;
	small_parse_table_12818(v);
}

void	small_parse_table_12818(t_small_parse_table_array *v)
{
	v->a[256360] = sym__c_variable_assignment;
	v->a[256361] = actions(11806);
	v->a[256362] = 2;
	v->a[256363] = anon_sym_PLUS_PLUS;
	v->a[256364] = anon_sym_DASH_DASH;
	v->a[256365] = state(3292);
	v->a[256366] = 7;
	v->a[256367] = sym__c_expression_not_assignment;
	v->a[256368] = sym__c_parenthesized_expression;
	v->a[256369] = sym_string;
	v->a[256370] = sym_number;
	v->a[256371] = sym_simple_expansion;
	v->a[256372] = sym_expansion;
	v->a[256373] = sym_command_substitution;
	v->a[256374] = 3;
	v->a[256375] = actions(3);
	v->a[256376] = 1;
	v->a[256377] = sym_comment;
	v->a[256378] = actions(11790);
	v->a[256379] = 2;
	small_parse_table_12819(v);
}

void	small_parse_table_12819(t_small_parse_table_array *v)
{
	v->a[256380] = sym_file_descriptor;
	v->a[256381] = aux_sym_heredoc_redirect_token1;
	v->a[256382] = actions(11792);
	v->a[256383] = 23;
	v->a[256384] = anon_sym_SEMI;
	v->a[256385] = anon_sym_PIPE_PIPE;
	v->a[256386] = anon_sym_AMP_AMP;
	v->a[256387] = anon_sym_PIPE;
	v->a[256388] = anon_sym_AMP;
	v->a[256389] = anon_sym_LT;
	v->a[256390] = anon_sym_GT;
	v->a[256391] = anon_sym_LT_LT;
	v->a[256392] = anon_sym_GT_GT;
	v->a[256393] = anon_sym_esac;
	v->a[256394] = anon_sym_SEMI_SEMI;
	v->a[256395] = anon_sym_SEMI_AMP;
	v->a[256396] = anon_sym_SEMI_SEMI_AMP;
	v->a[256397] = anon_sym_PIPE_AMP;
	v->a[256398] = anon_sym_AMP_GT;
	v->a[256399] = anon_sym_AMP_GT_GT;
	small_parse_table_12820(v);
}

/* EOF small_parse_table_2563.c */
