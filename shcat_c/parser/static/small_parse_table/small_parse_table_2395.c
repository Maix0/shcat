/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2395.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11975(t_small_parse_table_array *v)
{
	v->a[239500] = state(3116);
	v->a[239501] = 1;
	v->a[239502] = sym__c_binary_expression;
	v->a[239503] = state(3118);
	v->a[239504] = 1;
	v->a[239505] = sym__c_unary_expression;
	v->a[239506] = state(4243);
	v->a[239507] = 1;
	v->a[239508] = sym__c_terminator;
	v->a[239509] = state(6365);
	v->a[239510] = 1;
	v->a[239511] = sym__c_expression;
	v->a[239512] = state(6493);
	v->a[239513] = 1;
	v->a[239514] = sym__c_variable_assignment;
	v->a[239515] = state(7061);
	v->a[239516] = 1;
	v->a[239517] = sym__for_body;
	v->a[239518] = actions(11246);
	v->a[239519] = 2;
	small_parse_table_11976(v);
}

void	small_parse_table_11976(t_small_parse_table_array *v)
{
	v->a[239520] = anon_sym_SEMI;
	v->a[239521] = anon_sym_AMP;
	v->a[239522] = actions(11248);
	v->a[239523] = 2;
	v->a[239524] = anon_sym_PLUS_PLUS;
	v->a[239525] = anon_sym_DASH_DASH;
	v->a[239526] = state(3119);
	v->a[239527] = 7;
	v->a[239528] = sym__c_expression_not_assignment;
	v->a[239529] = sym__c_parenthesized_expression;
	v->a[239530] = sym_string;
	v->a[239531] = sym_number;
	v->a[239532] = sym_simple_expansion;
	v->a[239533] = sym_expansion;
	v->a[239534] = sym_command_substitution;
	v->a[239535] = 6;
	v->a[239536] = actions(3);
	v->a[239537] = 1;
	v->a[239538] = sym_comment;
	v->a[239539] = actions(11272);
	small_parse_table_11977(v);
}

void	small_parse_table_11977(t_small_parse_table_array *v)
{
	v->a[239540] = 1;
	v->a[239541] = aux_sym_concatenation_token1;
	v->a[239542] = actions(11274);
	v->a[239543] = 1;
	v->a[239544] = sym__concat;
	v->a[239545] = state(4248);
	v->a[239546] = 1;
	v->a[239547] = aux_sym_concatenation_repeat1;
	v->a[239548] = actions(1263);
	v->a[239549] = 2;
	v->a[239550] = sym_file_descriptor;
	v->a[239551] = aux_sym_heredoc_redirect_token1;
	v->a[239552] = actions(1261);
	v->a[239553] = 24;
	v->a[239554] = anon_sym_SEMI;
	v->a[239555] = anon_sym_PIPE_PIPE;
	v->a[239556] = anon_sym_AMP_AMP;
	v->a[239557] = anon_sym_PIPE;
	v->a[239558] = anon_sym_AMP;
	v->a[239559] = anon_sym_LT;
	small_parse_table_11978(v);
}

void	small_parse_table_11978(t_small_parse_table_array *v)
{
	v->a[239560] = anon_sym_GT;
	v->a[239561] = anon_sym_LT_LT;
	v->a[239562] = anon_sym_GT_GT;
	v->a[239563] = anon_sym_esac;
	v->a[239564] = anon_sym_SEMI_SEMI;
	v->a[239565] = anon_sym_SEMI_AMP;
	v->a[239566] = anon_sym_SEMI_SEMI_AMP;
	v->a[239567] = anon_sym_PIPE_AMP;
	v->a[239568] = anon_sym_AMP_GT;
	v->a[239569] = anon_sym_AMP_GT_GT;
	v->a[239570] = anon_sym_LT_AMP;
	v->a[239571] = anon_sym_GT_AMP;
	v->a[239572] = anon_sym_GT_PIPE;
	v->a[239573] = anon_sym_LT_AMP_DASH;
	v->a[239574] = anon_sym_GT_AMP_DASH;
	v->a[239575] = anon_sym_LT_LT_DASH;
	v->a[239576] = anon_sym_LT_LT_LT;
	v->a[239577] = sym__special_character;
	v->a[239578] = 22;
	v->a[239579] = actions(3);
	small_parse_table_11979(v);
}

void	small_parse_table_11979(t_small_parse_table_array *v)
{
	v->a[239580] = 1;
	v->a[239581] = sym_comment;
	v->a[239582] = actions(11250);
	v->a[239583] = 1;
	v->a[239584] = anon_sym_LPAREN;
	v->a[239585] = actions(11252);
	v->a[239586] = 1;
	v->a[239587] = aux_sym__c_word_token1;
	v->a[239588] = actions(11254);
	v->a[239589] = 1;
	v->a[239590] = aux_sym_heredoc_redirect_token1;
	v->a[239591] = actions(11256);
	v->a[239592] = 1;
	v->a[239593] = anon_sym_DOLLAR;
	v->a[239594] = actions(11258);
	v->a[239595] = 1;
	v->a[239596] = anon_sym_DQUOTE;
	v->a[239597] = actions(11260);
	v->a[239598] = 1;
	v->a[239599] = aux_sym_number_token1;
	small_parse_table_11980(v);
}

/* EOF small_parse_table_2395.c */
