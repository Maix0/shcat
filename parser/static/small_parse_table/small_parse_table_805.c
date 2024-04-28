/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_805.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4025(t_small_parse_table_array *v)
{
	v->a[80500] = sym__special_character;
	v->a[80501] = actions(1081);
	v->a[80502] = 1;
	v->a[80503] = anon_sym_DQUOTE;
	v->a[80504] = actions(1085);
	v->a[80505] = 1;
	v->a[80506] = anon_sym_DOLLAR_LBRACE;
	v->a[80507] = actions(1087);
	v->a[80508] = 1;
	v->a[80509] = anon_sym_DOLLAR_BQUOTE;
	v->a[80510] = actions(3598);
	v->a[80511] = 1;
	v->a[80512] = anon_sym_BQUOTE;
	v->a[80513] = actions(5926);
	v->a[80514] = 1;
	v->a[80515] = sym_extglob_pattern;
	v->a[80516] = state(2690);
	v->a[80517] = 1;
	v->a[80518] = aux_sym__literal_repeat1;
	v->a[80519] = state(3082);
	small_parse_table_4026(v);
}

void	small_parse_table_4026(t_small_parse_table_array *v)
{
	v->a[80520] = 1;
	v->a[80521] = sym__expression;
	v->a[80522] = state(3138);
	v->a[80523] = 1;
	v->a[80524] = sym__extglob_blob;
	v->a[80525] = actions(103);
	v->a[80526] = 2;
	v->a[80527] = anon_sym_PLUS_PLUS2;
	v->a[80528] = anon_sym_DASH_DASH2;
	v->a[80529] = actions(105);
	v->a[80530] = 2;
	v->a[80531] = anon_sym_DASH2;
	v->a[80532] = anon_sym_PLUS2;
	v->a[80533] = actions(1073);
	v->a[80534] = 2;
	v->a[80535] = anon_sym_LPAREN_LPAREN;
	v->a[80536] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80537] = actions(1083);
	v->a[80538] = 2;
	v->a[80539] = sym_raw_string;
	small_parse_table_4027(v);
}

void	small_parse_table_4027(t_small_parse_table_array *v)
{
	v->a[80540] = sym_ansi_c_string;
	v->a[80541] = actions(1089);
	v->a[80542] = 2;
	v->a[80543] = anon_sym_LT_LPAREN;
	v->a[80544] = anon_sym_GT_LPAREN;
	v->a[80545] = state(3053);
	v->a[80546] = 6;
	v->a[80547] = sym_binary_expression;
	v->a[80548] = sym_ternary_expression;
	v->a[80549] = sym_unary_expression;
	v->a[80550] = sym_postfix_expression;
	v->a[80551] = sym_parenthesized_expression;
	v->a[80552] = sym_concatenation;
	v->a[80553] = state(2500);
	v->a[80554] = 9;
	v->a[80555] = sym_arithmetic_expansion;
	v->a[80556] = sym_brace_expression;
	v->a[80557] = sym_string;
	v->a[80558] = sym_translated_string;
	v->a[80559] = sym_number;
	small_parse_table_4028(v);
}

void	small_parse_table_4028(t_small_parse_table_array *v)
{
	v->a[80560] = sym_simple_expansion;
	v->a[80561] = sym_expansion;
	v->a[80562] = sym_command_substitution;
	v->a[80563] = sym_process_substitution;
	v->a[80564] = 5;
	v->a[80565] = actions(3);
	v->a[80566] = 1;
	v->a[80567] = sym_comment;
	v->a[80568] = actions(5928);
	v->a[80569] = 1;
	v->a[80570] = sym__special_character;
	v->a[80571] = state(1646);
	v->a[80572] = 1;
	v->a[80573] = aux_sym__literal_repeat1;
	v->a[80574] = actions(5180);
	v->a[80575] = 5;
	v->a[80576] = sym_file_descriptor;
	v->a[80577] = sym_variable_name;
	v->a[80578] = sym_test_operator;
	v->a[80579] = sym__brace_start;
	small_parse_table_4029(v);
}

void	small_parse_table_4029(t_small_parse_table_array *v)
{
	v->a[80580] = aux_sym_heredoc_redirect_token1;
	v->a[80581] = actions(5178);
	v->a[80582] = 38;
	v->a[80583] = anon_sym_LPAREN_LPAREN;
	v->a[80584] = anon_sym_SEMI;
	v->a[80585] = anon_sym_PIPE_PIPE;
	v->a[80586] = anon_sym_AMP_AMP;
	v->a[80587] = anon_sym_PIPE;
	v->a[80588] = anon_sym_AMP;
	v->a[80589] = anon_sym_LT;
	v->a[80590] = anon_sym_GT;
	v->a[80591] = anon_sym_LT_LT;
	v->a[80592] = anon_sym_GT_GT;
	v->a[80593] = anon_sym_SEMI_SEMI;
	v->a[80594] = anon_sym_SEMI_AMP;
	v->a[80595] = anon_sym_SEMI_SEMI_AMP;
	v->a[80596] = anon_sym_PIPE_AMP;
	v->a[80597] = anon_sym_AMP_GT;
	v->a[80598] = anon_sym_AMP_GT_GT;
	v->a[80599] = anon_sym_LT_AMP;
	small_parse_table_4030(v);
}

/* EOF small_parse_table_805.c */
