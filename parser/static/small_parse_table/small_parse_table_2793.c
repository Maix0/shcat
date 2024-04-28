/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2793.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13965(t_small_parse_table_array *v)
{
	v->a[279300] = sym__c_parenthesized_expression;
	v->a[279301] = sym_string;
	v->a[279302] = sym_number;
	v->a[279303] = sym_simple_expansion;
	v->a[279304] = sym_expansion;
	v->a[279305] = sym_command_substitution;
	v->a[279306] = 4;
	v->a[279307] = actions(71);
	v->a[279308] = 1;
	v->a[279309] = sym_comment;
	v->a[279310] = actions(12494);
	v->a[279311] = 1;
	v->a[279312] = anon_sym_esac;
	v->a[279313] = actions(12490);
	v->a[279314] = 6;
	v->a[279315] = anon_sym_LPAREN;
	v->a[279316] = anon_sym_DOLLAR;
	v->a[279317] = aux_sym_number_token1;
	v->a[279318] = aux_sym_number_token2;
	v->a[279319] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_13966(v);
}

void	small_parse_table_13966(t_small_parse_table_array *v)
{
	v->a[279320] = sym_word;
	v->a[279321] = actions(12492);
	v->a[279322] = 15;
	v->a[279323] = sym_test_operator;
	v->a[279324] = sym_extglob_pattern;
	v->a[279325] = sym__brace_start;
	v->a[279326] = anon_sym_LPAREN_LPAREN;
	v->a[279327] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[279328] = anon_sym_DOLLAR_LBRACK;
	v->a[279329] = sym__special_character;
	v->a[279330] = anon_sym_DQUOTE;
	v->a[279331] = sym_raw_string;
	v->a[279332] = sym_ansi_c_string;
	v->a[279333] = anon_sym_DOLLAR_LBRACE;
	v->a[279334] = anon_sym_BQUOTE;
	v->a[279335] = anon_sym_DOLLAR_BQUOTE;
	v->a[279336] = anon_sym_LT_LPAREN;
	v->a[279337] = anon_sym_GT_LPAREN;
	v->a[279338] = 16;
	v->a[279339] = actions(71);
	small_parse_table_13967(v);
}

void	small_parse_table_13967(t_small_parse_table_array *v)
{
	v->a[279340] = 1;
	v->a[279341] = sym_comment;
	v->a[279342] = actions(11808);
	v->a[279343] = 1;
	v->a[279344] = anon_sym_LPAREN;
	v->a[279345] = actions(11812);
	v->a[279346] = 1;
	v->a[279347] = anon_sym_DOLLAR;
	v->a[279348] = actions(11814);
	v->a[279349] = 1;
	v->a[279350] = anon_sym_DQUOTE;
	v->a[279351] = actions(11816);
	v->a[279352] = 1;
	v->a[279353] = aux_sym_number_token1;
	v->a[279354] = actions(11818);
	v->a[279355] = 1;
	v->a[279356] = aux_sym_number_token2;
	v->a[279357] = actions(11820);
	v->a[279358] = 1;
	v->a[279359] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_13968(v);
}

void	small_parse_table_13968(t_small_parse_table_array *v)
{
	v->a[279360] = actions(11822);
	v->a[279361] = 1;
	v->a[279362] = anon_sym_DOLLAR_LPAREN;
	v->a[279363] = actions(11824);
	v->a[279364] = 1;
	v->a[279365] = anon_sym_BQUOTE;
	v->a[279366] = actions(11826);
	v->a[279367] = 1;
	v->a[279368] = anon_sym_DOLLAR_BQUOTE;
	v->a[279369] = actions(12594);
	v->a[279370] = 1;
	v->a[279371] = aux_sym__c_word_token1;
	v->a[279372] = state(3285);
	v->a[279373] = 1;
	v->a[279374] = sym__c_postfix_expression;
	v->a[279375] = state(3286);
	v->a[279376] = 1;
	v->a[279377] = sym__c_binary_expression;
	v->a[279378] = state(3290);
	v->a[279379] = 1;
	small_parse_table_13969(v);
}

void	small_parse_table_13969(t_small_parse_table_array *v)
{
	v->a[279380] = sym__c_unary_expression;
	v->a[279381] = actions(11806);
	v->a[279382] = 2;
	v->a[279383] = anon_sym_PLUS_PLUS;
	v->a[279384] = anon_sym_DASH_DASH;
	v->a[279385] = state(3200);
	v->a[279386] = 7;
	v->a[279387] = sym__c_expression_not_assignment;
	v->a[279388] = sym__c_parenthesized_expression;
	v->a[279389] = sym_string;
	v->a[279390] = sym_number;
	v->a[279391] = sym_simple_expansion;
	v->a[279392] = sym_expansion;
	v->a[279393] = sym_command_substitution;
	v->a[279394] = 16;
	v->a[279395] = actions(71);
	v->a[279396] = 1;
	v->a[279397] = sym_comment;
	v->a[279398] = actions(11808);
	v->a[279399] = 1;
	small_parse_table_13970(v);
}

/* EOF small_parse_table_2793.c */
