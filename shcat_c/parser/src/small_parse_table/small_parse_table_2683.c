/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2683.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13415(t_small_parse_table_array *v)
{
	v->a[268300] = anon_sym_LT_LT;
	v->a[268301] = anon_sym_GT_GT;
	v->a[268302] = anon_sym_esac;
	v->a[268303] = anon_sym_SEMI_SEMI;
	v->a[268304] = anon_sym_SEMI_AMP;
	v->a[268305] = anon_sym_SEMI_SEMI_AMP;
	v->a[268306] = anon_sym_PIPE_AMP;
	v->a[268307] = anon_sym_AMP_GT;
	v->a[268308] = anon_sym_AMP_GT_GT;
	v->a[268309] = anon_sym_LT_AMP;
	v->a[268310] = anon_sym_GT_AMP;
	v->a[268311] = anon_sym_GT_PIPE;
	v->a[268312] = anon_sym_LT_AMP_DASH;
	v->a[268313] = anon_sym_GT_AMP_DASH;
	v->a[268314] = anon_sym_LT_LT_DASH;
	v->a[268315] = 18;
	v->a[268316] = actions(71);
	v->a[268317] = 1;
	v->a[268318] = sym_comment;
	v->a[268319] = actions(12167);
	small_parse_table_13416(v);
}

void	small_parse_table_13416(t_small_parse_table_array *v)
{
	v->a[268320] = 1;
	v->a[268321] = anon_sym_LPAREN;
	v->a[268322] = actions(12169);
	v->a[268323] = 1;
	v->a[268324] = aux_sym__c_word_token1;
	v->a[268325] = actions(12171);
	v->a[268326] = 1;
	v->a[268327] = anon_sym_DOLLAR;
	v->a[268328] = actions(12173);
	v->a[268329] = 1;
	v->a[268330] = anon_sym_DQUOTE;
	v->a[268331] = actions(12175);
	v->a[268332] = 1;
	v->a[268333] = aux_sym_number_token1;
	v->a[268334] = actions(12177);
	v->a[268335] = 1;
	v->a[268336] = aux_sym_number_token2;
	v->a[268337] = actions(12179);
	v->a[268338] = 1;
	v->a[268339] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_13417(v);
}

void	small_parse_table_13417(t_small_parse_table_array *v)
{
	v->a[268340] = actions(12181);
	v->a[268341] = 1;
	v->a[268342] = anon_sym_DOLLAR_LPAREN;
	v->a[268343] = actions(12183);
	v->a[268344] = 1;
	v->a[268345] = anon_sym_BQUOTE;
	v->a[268346] = actions(12185);
	v->a[268347] = 1;
	v->a[268348] = anon_sym_DOLLAR_BQUOTE;
	v->a[268349] = state(3442);
	v->a[268350] = 1;
	v->a[268351] = sym__c_unary_expression;
	v->a[268352] = state(3443);
	v->a[268353] = 1;
	v->a[268354] = sym__c_binary_expression;
	v->a[268355] = state(3444);
	v->a[268356] = 1;
	v->a[268357] = sym__c_postfix_expression;
	v->a[268358] = state(6728);
	v->a[268359] = 1;
	small_parse_table_13418(v);
}

void	small_parse_table_13418(t_small_parse_table_array *v)
{
	v->a[268360] = sym__c_expression;
	v->a[268361] = state(6762);
	v->a[268362] = 1;
	v->a[268363] = sym__c_variable_assignment;
	v->a[268364] = actions(12165);
	v->a[268365] = 2;
	v->a[268366] = anon_sym_PLUS_PLUS;
	v->a[268367] = anon_sym_DASH_DASH;
	v->a[268368] = state(3441);
	v->a[268369] = 7;
	v->a[268370] = sym__c_expression_not_assignment;
	v->a[268371] = sym__c_parenthesized_expression;
	v->a[268372] = sym_string;
	v->a[268373] = sym_number;
	v->a[268374] = sym_simple_expansion;
	v->a[268375] = sym_expansion;
	v->a[268376] = sym_command_substitution;
	v->a[268377] = 3;
	v->a[268378] = actions(3);
	v->a[268379] = 1;
	small_parse_table_13419(v);
}

void	small_parse_table_13419(t_small_parse_table_array *v)
{
	v->a[268380] = sym_comment;
	v->a[268381] = actions(5375);
	v->a[268382] = 3;
	v->a[268383] = sym_file_descriptor;
	v->a[268384] = sym_variable_name;
	v->a[268385] = aux_sym_heredoc_redirect_token1;
	v->a[268386] = actions(5373);
	v->a[268387] = 21;
	v->a[268388] = anon_sym_SEMI;
	v->a[268389] = anon_sym_PIPE_PIPE;
	v->a[268390] = anon_sym_AMP_AMP;
	v->a[268391] = anon_sym_PIPE;
	v->a[268392] = anon_sym_AMP;
	v->a[268393] = anon_sym_LT;
	v->a[268394] = anon_sym_GT;
	v->a[268395] = anon_sym_LT_LT;
	v->a[268396] = anon_sym_GT_GT;
	v->a[268397] = anon_sym_SEMI_SEMI;
	v->a[268398] = anon_sym_SEMI_AMP;
	v->a[268399] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_13420(v);
}

/* EOF small_parse_table_2683.c */
