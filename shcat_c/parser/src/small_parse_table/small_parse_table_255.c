/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_255.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1275(t_small_parse_table_array *v)
{
	v->a[25500] = actions(4155);
	v->a[25501] = 1;
	v->a[25502] = sym__special_character;
	v->a[25503] = actions(4157);
	v->a[25504] = 1;
	v->a[25505] = anon_sym_DQUOTE;
	v->a[25506] = actions(4161);
	v->a[25507] = 1;
	v->a[25508] = aux_sym_number_token1;
	v->a[25509] = actions(4163);
	v->a[25510] = 1;
	v->a[25511] = aux_sym_number_token2;
	v->a[25512] = actions(4165);
	v->a[25513] = 1;
	v->a[25514] = anon_sym_DOLLAR_LBRACE;
	v->a[25515] = actions(4167);
	v->a[25516] = 1;
	v->a[25517] = anon_sym_DOLLAR_LPAREN;
	v->a[25518] = actions(4169);
	v->a[25519] = 1;
	small_parse_table_1276(v);
}

void	small_parse_table_1276(t_small_parse_table_array *v)
{
	v->a[25520] = anon_sym_BQUOTE;
	v->a[25521] = actions(4171);
	v->a[25522] = 1;
	v->a[25523] = anon_sym_DOLLAR_BQUOTE;
	v->a[25524] = actions(4177);
	v->a[25525] = 1;
	v->a[25526] = sym_variable_name;
	v->a[25527] = actions(4179);
	v->a[25528] = 1;
	v->a[25529] = sym_test_operator;
	v->a[25530] = actions(4181);
	v->a[25531] = 1;
	v->a[25532] = sym__brace_start;
	v->a[25533] = actions(4187);
	v->a[25534] = 1;
	v->a[25535] = aux_sym__simple_variable_name_token1;
	v->a[25536] = state(2688);
	v->a[25537] = 1;
	v->a[25538] = aux_sym__literal_repeat1;
	v->a[25539] = state(6751);
	small_parse_table_1277(v);
}

void	small_parse_table_1277(t_small_parse_table_array *v)
{
	v->a[25540] = 1;
	v->a[25541] = sym_subscript;
	v->a[25542] = actions(4149);
	v->a[25543] = 2;
	v->a[25544] = anon_sym_LPAREN_LPAREN;
	v->a[25545] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25546] = actions(4159);
	v->a[25547] = 2;
	v->a[25548] = sym_raw_string;
	v->a[25549] = sym_ansi_c_string;
	v->a[25550] = actions(4173);
	v->a[25551] = 2;
	v->a[25552] = anon_sym_LT_LPAREN;
	v->a[25553] = anon_sym_GT_LPAREN;
	v->a[25554] = state(797);
	v->a[25555] = 3;
	v->a[25556] = sym_variable_assignment;
	v->a[25557] = sym_concatenation;
	v->a[25558] = aux_sym_declaration_command_repeat1;
	v->a[25559] = actions(1755);
	small_parse_table_1278(v);
}

void	small_parse_table_1278(t_small_parse_table_array *v)
{
	v->a[25560] = 7;
	v->a[25561] = anon_sym_PIPE;
	v->a[25562] = anon_sym_LT;
	v->a[25563] = anon_sym_GT;
	v->a[25564] = anon_sym_LT_LT;
	v->a[25565] = anon_sym_AMP_GT;
	v->a[25566] = anon_sym_LT_AMP;
	v->a[25567] = anon_sym_GT_AMP;
	v->a[25568] = state(2419);
	v->a[25569] = 9;
	v->a[25570] = sym_arithmetic_expansion;
	v->a[25571] = sym_brace_expression;
	v->a[25572] = sym_string;
	v->a[25573] = sym_translated_string;
	v->a[25574] = sym_number;
	v->a[25575] = sym_simple_expansion;
	v->a[25576] = sym_expansion;
	v->a[25577] = sym_command_substitution;
	v->a[25578] = sym_process_substitution;
	v->a[25579] = actions(1757);
	small_parse_table_1279(v);
}

void	small_parse_table_1279(t_small_parse_table_array *v)
{
	v->a[25580] = 10;
	v->a[25581] = sym_file_descriptor;
	v->a[25582] = anon_sym_PIPE_PIPE;
	v->a[25583] = anon_sym_AMP_AMP;
	v->a[25584] = anon_sym_GT_GT;
	v->a[25585] = anon_sym_PIPE_AMP;
	v->a[25586] = anon_sym_AMP_GT_GT;
	v->a[25587] = anon_sym_GT_PIPE;
	v->a[25588] = anon_sym_LT_AMP_DASH;
	v->a[25589] = anon_sym_GT_AMP_DASH;
	v->a[25590] = anon_sym_LT_LT_DASH;
	v->a[25591] = 4;
	v->a[25592] = actions(71);
	v->a[25593] = 1;
	v->a[25594] = sym_comment;
	v->a[25595] = actions(2721);
	v->a[25596] = 1;
	v->a[25597] = ts_builtin_sym_end;
	v->a[25598] = actions(2717);
	v->a[25599] = 23;
	small_parse_table_1280(v);
}

/* EOF small_parse_table_255.c */
