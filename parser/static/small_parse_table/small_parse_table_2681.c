/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2681.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13405(t_small_parse_table_array *v)
{
	v->a[268100] = actions(12177);
	v->a[268101] = 1;
	v->a[268102] = aux_sym_number_token2;
	v->a[268103] = actions(12179);
	v->a[268104] = 1;
	v->a[268105] = anon_sym_DOLLAR_LBRACE;
	v->a[268106] = actions(12181);
	v->a[268107] = 1;
	v->a[268108] = anon_sym_DOLLAR_LPAREN;
	v->a[268109] = actions(12183);
	v->a[268110] = 1;
	v->a[268111] = anon_sym_BQUOTE;
	v->a[268112] = actions(12185);
	v->a[268113] = 1;
	v->a[268114] = anon_sym_DOLLAR_BQUOTE;
	v->a[268115] = state(3442);
	v->a[268116] = 1;
	v->a[268117] = sym__c_unary_expression;
	v->a[268118] = state(3443);
	v->a[268119] = 1;
	small_parse_table_13406(v);
}

void	small_parse_table_13406(t_small_parse_table_array *v)
{
	v->a[268120] = sym__c_binary_expression;
	v->a[268121] = state(3444);
	v->a[268122] = 1;
	v->a[268123] = sym__c_postfix_expression;
	v->a[268124] = state(6742);
	v->a[268125] = 1;
	v->a[268126] = sym__c_expression;
	v->a[268127] = state(6762);
	v->a[268128] = 1;
	v->a[268129] = sym__c_variable_assignment;
	v->a[268130] = actions(12165);
	v->a[268131] = 2;
	v->a[268132] = anon_sym_PLUS_PLUS;
	v->a[268133] = anon_sym_DASH_DASH;
	v->a[268134] = state(3441);
	v->a[268135] = 7;
	v->a[268136] = sym__c_expression_not_assignment;
	v->a[268137] = sym__c_parenthesized_expression;
	v->a[268138] = sym_string;
	v->a[268139] = sym_number;
	small_parse_table_13407(v);
}

void	small_parse_table_13407(t_small_parse_table_array *v)
{
	v->a[268140] = sym_simple_expansion;
	v->a[268141] = sym_expansion;
	v->a[268142] = sym_command_substitution;
	v->a[268143] = 6;
	v->a[268144] = actions(3);
	v->a[268145] = 1;
	v->a[268146] = sym_comment;
	v->a[268147] = actions(11651);
	v->a[268148] = 1;
	v->a[268149] = aux_sym_concatenation_token1;
	v->a[268150] = actions(11653);
	v->a[268151] = 1;
	v->a[268152] = sym__concat;
	v->a[268153] = state(5031);
	v->a[268154] = 1;
	v->a[268155] = aux_sym_concatenation_repeat1;
	v->a[268156] = actions(4469);
	v->a[268157] = 2;
	v->a[268158] = sym_file_descriptor;
	v->a[268159] = aux_sym_heredoc_redirect_token1;
	small_parse_table_13408(v);
}

void	small_parse_table_13408(t_small_parse_table_array *v)
{
	v->a[268160] = actions(4467);
	v->a[268161] = 19;
	v->a[268162] = anon_sym_SEMI;
	v->a[268163] = anon_sym_PIPE_PIPE;
	v->a[268164] = anon_sym_AMP_AMP;
	v->a[268165] = anon_sym_PIPE;
	v->a[268166] = anon_sym_AMP;
	v->a[268167] = anon_sym_LT;
	v->a[268168] = anon_sym_GT;
	v->a[268169] = anon_sym_LT_LT;
	v->a[268170] = anon_sym_GT_GT;
	v->a[268171] = anon_sym_SEMI_SEMI;
	v->a[268172] = anon_sym_PIPE_AMP;
	v->a[268173] = anon_sym_AMP_GT;
	v->a[268174] = anon_sym_AMP_GT_GT;
	v->a[268175] = anon_sym_LT_AMP;
	v->a[268176] = anon_sym_GT_AMP;
	v->a[268177] = anon_sym_GT_PIPE;
	v->a[268178] = anon_sym_LT_AMP_DASH;
	v->a[268179] = anon_sym_GT_AMP_DASH;
	small_parse_table_13409(v);
}

void	small_parse_table_13409(t_small_parse_table_array *v)
{
	v->a[268180] = anon_sym_LT_LT_DASH;
	v->a[268181] = 3;
	v->a[268182] = actions(3);
	v->a[268183] = 1;
	v->a[268184] = sym_comment;
	v->a[268185] = actions(12199);
	v->a[268186] = 3;
	v->a[268187] = sym_file_descriptor;
	v->a[268188] = ts_builtin_sym_end;
	v->a[268189] = aux_sym_heredoc_redirect_token1;
	v->a[268190] = actions(12201);
	v->a[268191] = 21;
	v->a[268192] = anon_sym_SEMI;
	v->a[268193] = anon_sym_PIPE_PIPE;
	v->a[268194] = anon_sym_AMP_AMP;
	v->a[268195] = anon_sym_PIPE;
	v->a[268196] = anon_sym_AMP;
	v->a[268197] = anon_sym_LT;
	v->a[268198] = anon_sym_GT;
	v->a[268199] = anon_sym_LT_LT;
	small_parse_table_13410(v);
}

/* EOF small_parse_table_2681.c */
