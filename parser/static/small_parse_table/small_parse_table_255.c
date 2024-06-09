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
	v->a[25500] = 1;
	v->a[25501] = anon_sym_BQUOTE;
	v->a[25502] = actions(949);
	v->a[25503] = 1;
	v->a[25504] = sym_file_descriptor;
	v->a[25505] = actions(951);
	v->a[25506] = 1;
	v->a[25507] = aux_sym_heredoc_redirect_token1;
	v->a[25508] = state(1341);
	v->a[25509] = 1;
	v->a[25510] = aux_sym__heredoc_command;
	v->a[25511] = state(1832);
	v->a[25512] = 1;
	v->a[25513] = sym_concatenation;
	v->a[25514] = state(2189);
	v->a[25515] = 1;
	v->a[25516] = sym__heredoc_expression;
	v->a[25517] = state(2190);
	v->a[25518] = 1;
	v->a[25519] = sym__heredoc_pipeline;
	small_parse_table_1276(v);
}

void	small_parse_table_1276(t_small_parse_table_array *v)
{
	v->a[25520] = actions(921);
	v->a[25521] = 2;
	v->a[25522] = sym_raw_string;
	v->a[25523] = sym_word;
	v->a[25524] = actions(923);
	v->a[25525] = 2;
	v->a[25526] = anon_sym_PIPE;
	v->a[25527] = anon_sym_PIPE_AMP;
	v->a[25528] = actions(925);
	v->a[25529] = 2;
	v->a[25530] = anon_sym_AMP_AMP;
	v->a[25531] = anon_sym_PIPE_PIPE;
	v->a[25532] = actions(929);
	v->a[25533] = 2;
	v->a[25534] = anon_sym_LT_AMP_DASH;
	v->a[25535] = anon_sym_GT_AMP_DASH;
	v->a[25536] = state(1515);
	v->a[25537] = 2;
	v->a[25538] = sym_file_redirect;
	v->a[25539] = aux_sym_redirected_statement_repeat2;
	small_parse_table_1277(v);
}

void	small_parse_table_1277(t_small_parse_table_array *v)
{
	v->a[25540] = state(1614);
	v->a[25541] = 6;
	v->a[25542] = sym_arithmetic_expansion;
	v->a[25543] = sym_string;
	v->a[25544] = sym_number;
	v->a[25545] = sym_simple_expansion;
	v->a[25546] = sym_expansion;
	v->a[25547] = sym_command_substitution;
	v->a[25548] = actions(927);
	v->a[25549] = 8;
	v->a[25550] = anon_sym_LT;
	v->a[25551] = anon_sym_GT;
	v->a[25552] = anon_sym_GT_GT;
	v->a[25553] = anon_sym_AMP_GT;
	v->a[25554] = anon_sym_AMP_GT_GT;
	v->a[25555] = anon_sym_LT_AMP;
	v->a[25556] = anon_sym_GT_AMP;
	v->a[25557] = anon_sym_GT_PIPE;
	v->a[25558] = 14;
	v->a[25559] = actions(3);
	small_parse_table_1278(v);
}

void	small_parse_table_1278(t_small_parse_table_array *v)
{
	v->a[25560] = 1;
	v->a[25561] = sym_comment;
	v->a[25562] = actions(750);
	v->a[25563] = 1;
	v->a[25564] = sym_file_descriptor;
	v->a[25565] = actions(905);
	v->a[25566] = 1;
	v->a[25567] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25568] = actions(907);
	v->a[25569] = 1;
	v->a[25570] = anon_sym_DOLLAR;
	v->a[25571] = actions(909);
	v->a[25572] = 1;
	v->a[25573] = anon_sym_DQUOTE;
	v->a[25574] = actions(911);
	v->a[25575] = 1;
	v->a[25576] = aux_sym_number_token1;
	v->a[25577] = actions(913);
	v->a[25578] = 1;
	v->a[25579] = aux_sym_number_token2;
	small_parse_table_1279(v);
}

void	small_parse_table_1279(t_small_parse_table_array *v)
{
	v->a[25580] = actions(915);
	v->a[25581] = 1;
	v->a[25582] = anon_sym_DOLLAR_LBRACE;
	v->a[25583] = actions(917);
	v->a[25584] = 1;
	v->a[25585] = anon_sym_DOLLAR_LPAREN;
	v->a[25586] = actions(919);
	v->a[25587] = 1;
	v->a[25588] = anon_sym_BQUOTE;
	v->a[25589] = state(1105);
	v->a[25590] = 1;
	v->a[25591] = sym_concatenation;
	v->a[25592] = actions(953);
	v->a[25593] = 2;
	v->a[25594] = sym_raw_string;
	v->a[25595] = sym_word;
	v->a[25596] = state(1089);
	v->a[25597] = 6;
	v->a[25598] = sym_arithmetic_expansion;
	v->a[25599] = sym_string;
	small_parse_table_1280(v);
}

/* EOF small_parse_table_255.c */
