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
	v->a[25500] = sym_variable_name;
	v->a[25501] = actions(900);
	v->a[25502] = 2;
	v->a[25503] = sym_file_descriptor;
	v->a[25504] = ts_builtin_sym_end;
	v->a[25505] = state(1285);
	v->a[25506] = 2;
	v->a[25507] = sym_variable_assignment;
	v->a[25508] = aux_sym__variable_assignments_repeat1;
	v->a[25509] = state(1289);
	v->a[25510] = 3;
	v->a[25511] = sym_file_redirect;
	v->a[25512] = sym_heredoc_redirect;
	v->a[25513] = aux_sym_redirected_statement_repeat1;
	v->a[25514] = actions(805);
	v->a[25515] = 9;
	v->a[25516] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25517] = anon_sym_DOLLAR;
	v->a[25518] = anon_sym_DQUOTE;
	v->a[25519] = sym_raw_string;
	small_parse_table_1276(v);
}

void	small_parse_table_1276(t_small_parse_table_array *v)
{
	v->a[25520] = sym_number;
	v->a[25521] = anon_sym_DOLLAR_LBRACE;
	v->a[25522] = anon_sym_DOLLAR_LPAREN;
	v->a[25523] = anon_sym_BQUOTE;
	v->a[25524] = sym_word;
	v->a[25525] = actions(807);
	v->a[25526] = 19;
	v->a[25527] = anon_sym_PIPE;
	v->a[25528] = anon_sym_SEMI_SEMI;
	v->a[25529] = anon_sym_AMP_AMP;
	v->a[25530] = anon_sym_PIPE_PIPE;
	v->a[25531] = anon_sym_LT;
	v->a[25532] = anon_sym_GT;
	v->a[25533] = anon_sym_GT_GT;
	v->a[25534] = anon_sym_AMP_GT;
	v->a[25535] = anon_sym_AMP_GT_GT;
	v->a[25536] = anon_sym_LT_AMP;
	v->a[25537] = anon_sym_GT_AMP;
	v->a[25538] = anon_sym_GT_PIPE;
	v->a[25539] = anon_sym_LT_AMP_DASH;
	small_parse_table_1277(v);
}

void	small_parse_table_1277(t_small_parse_table_array *v)
{
	v->a[25540] = anon_sym_GT_AMP_DASH;
	v->a[25541] = anon_sym_LT_LT;
	v->a[25542] = anon_sym_LT_LT_DASH;
	v->a[25543] = aux_sym_heredoc_redirect_token1;
	v->a[25544] = anon_sym_AMP;
	v->a[25545] = anon_sym_SEMI;
	v->a[25546] = 12;
	v->a[25547] = actions(3);
	v->a[25548] = 1;
	v->a[25549] = sym_comment;
	v->a[25550] = actions(608);
	v->a[25551] = 1;
	v->a[25552] = sym_file_descriptor;
	v->a[25553] = actions(749);
	v->a[25554] = 1;
	v->a[25555] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25556] = actions(751);
	v->a[25557] = 1;
	v->a[25558] = anon_sym_DOLLAR;
	v->a[25559] = actions(753);
	small_parse_table_1278(v);
}

void	small_parse_table_1278(t_small_parse_table_array *v)
{
	v->a[25560] = 1;
	v->a[25561] = anon_sym_DQUOTE;
	v->a[25562] = actions(755);
	v->a[25563] = 1;
	v->a[25564] = anon_sym_DOLLAR_LBRACE;
	v->a[25565] = actions(757);
	v->a[25566] = 1;
	v->a[25567] = anon_sym_DOLLAR_LPAREN;
	v->a[25568] = actions(759);
	v->a[25569] = 1;
	v->a[25570] = anon_sym_BQUOTE;
	v->a[25571] = state(260);
	v->a[25572] = 2;
	v->a[25573] = sym_concatenation;
	v->a[25574] = aux_sym_for_statement_repeat1;
	v->a[25575] = actions(928);
	v->a[25576] = 3;
	v->a[25577] = sym_raw_string;
	v->a[25578] = sym_number;
	v->a[25579] = sym_word;
	small_parse_table_1279(v);
}

void	small_parse_table_1279(t_small_parse_table_array *v)
{
	v->a[25580] = state(646);
	v->a[25581] = 5;
	v->a[25582] = sym_arithmetic_expansion;
	v->a[25583] = sym_string;
	v->a[25584] = sym_simple_expansion;
	v->a[25585] = sym_expansion;
	v->a[25586] = sym_command_substitution;
	v->a[25587] = actions(610);
	v->a[25588] = 19;
	v->a[25589] = anon_sym_PIPE;
	v->a[25590] = anon_sym_SEMI_SEMI;
	v->a[25591] = anon_sym_AMP_AMP;
	v->a[25592] = anon_sym_PIPE_PIPE;
	v->a[25593] = anon_sym_LT;
	v->a[25594] = anon_sym_GT;
	v->a[25595] = anon_sym_GT_GT;
	v->a[25596] = anon_sym_AMP_GT;
	v->a[25597] = anon_sym_AMP_GT_GT;
	v->a[25598] = anon_sym_LT_AMP;
	v->a[25599] = anon_sym_GT_AMP;
	small_parse_table_1280(v);
}

/* EOF small_parse_table_255.c */
