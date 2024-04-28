/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2791.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13955(t_small_parse_table_array *v)
{
	v->a[279100] = sym_number;
	v->a[279101] = sym_simple_expansion;
	v->a[279102] = sym_expansion;
	v->a[279103] = sym_command_substitution;
	v->a[279104] = 16;
	v->a[279105] = actions(71);
	v->a[279106] = 1;
	v->a[279107] = sym_comment;
	v->a[279108] = actions(11808);
	v->a[279109] = 1;
	v->a[279110] = anon_sym_LPAREN;
	v->a[279111] = actions(11812);
	v->a[279112] = 1;
	v->a[279113] = anon_sym_DOLLAR;
	v->a[279114] = actions(11814);
	v->a[279115] = 1;
	v->a[279116] = anon_sym_DQUOTE;
	v->a[279117] = actions(11816);
	v->a[279118] = 1;
	v->a[279119] = aux_sym_number_token1;
	small_parse_table_13956(v);
}

void	small_parse_table_13956(t_small_parse_table_array *v)
{
	v->a[279120] = actions(11818);
	v->a[279121] = 1;
	v->a[279122] = aux_sym_number_token2;
	v->a[279123] = actions(11820);
	v->a[279124] = 1;
	v->a[279125] = anon_sym_DOLLAR_LBRACE;
	v->a[279126] = actions(11822);
	v->a[279127] = 1;
	v->a[279128] = anon_sym_DOLLAR_LPAREN;
	v->a[279129] = actions(11824);
	v->a[279130] = 1;
	v->a[279131] = anon_sym_BQUOTE;
	v->a[279132] = actions(11826);
	v->a[279133] = 1;
	v->a[279134] = anon_sym_DOLLAR_BQUOTE;
	v->a[279135] = actions(12586);
	v->a[279136] = 1;
	v->a[279137] = aux_sym__c_word_token1;
	v->a[279138] = state(3285);
	v->a[279139] = 1;
	small_parse_table_13957(v);
}

void	small_parse_table_13957(t_small_parse_table_array *v)
{
	v->a[279140] = sym__c_postfix_expression;
	v->a[279141] = state(3286);
	v->a[279142] = 1;
	v->a[279143] = sym__c_binary_expression;
	v->a[279144] = state(3290);
	v->a[279145] = 1;
	v->a[279146] = sym__c_unary_expression;
	v->a[279147] = actions(11806);
	v->a[279148] = 2;
	v->a[279149] = anon_sym_PLUS_PLUS;
	v->a[279150] = anon_sym_DASH_DASH;
	v->a[279151] = state(3202);
	v->a[279152] = 7;
	v->a[279153] = sym__c_expression_not_assignment;
	v->a[279154] = sym__c_parenthesized_expression;
	v->a[279155] = sym_string;
	v->a[279156] = sym_number;
	v->a[279157] = sym_simple_expansion;
	v->a[279158] = sym_expansion;
	v->a[279159] = sym_command_substitution;
	small_parse_table_13958(v);
}

void	small_parse_table_13958(t_small_parse_table_array *v)
{
	v->a[279160] = 5;
	v->a[279161] = actions(3);
	v->a[279162] = 1;
	v->a[279163] = sym_comment;
	v->a[279164] = state(5216);
	v->a[279165] = 1;
	v->a[279166] = aux_sym_pipeline_repeat1;
	v->a[279167] = actions(12068);
	v->a[279168] = 2;
	v->a[279169] = sym_file_descriptor;
	v->a[279170] = aux_sym_heredoc_redirect_token1;
	v->a[279171] = actions(12588);
	v->a[279172] = 2;
	v->a[279173] = anon_sym_PIPE;
	v->a[279174] = anon_sym_PIPE_AMP;
	v->a[279175] = actions(12064);
	v->a[279176] = 17;
	v->a[279177] = anon_sym_SEMI;
	v->a[279178] = anon_sym_PIPE_PIPE;
	v->a[279179] = anon_sym_AMP_AMP;
	small_parse_table_13959(v);
}

void	small_parse_table_13959(t_small_parse_table_array *v)
{
	v->a[279180] = anon_sym_AMP;
	v->a[279181] = anon_sym_LT;
	v->a[279182] = anon_sym_GT;
	v->a[279183] = anon_sym_LT_LT;
	v->a[279184] = anon_sym_GT_GT;
	v->a[279185] = anon_sym_SEMI_SEMI;
	v->a[279186] = anon_sym_AMP_GT;
	v->a[279187] = anon_sym_AMP_GT_GT;
	v->a[279188] = anon_sym_LT_AMP;
	v->a[279189] = anon_sym_GT_AMP;
	v->a[279190] = anon_sym_GT_PIPE;
	v->a[279191] = anon_sym_LT_AMP_DASH;
	v->a[279192] = anon_sym_GT_AMP_DASH;
	v->a[279193] = anon_sym_LT_LT_DASH;
	v->a[279194] = 16;
	v->a[279195] = actions(71);
	v->a[279196] = 1;
	v->a[279197] = sym_comment;
	v->a[279198] = actions(11808);
	v->a[279199] = 1;
	small_parse_table_13960(v);
}

/* EOF small_parse_table_2791.c */
