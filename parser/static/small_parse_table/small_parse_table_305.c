/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_305.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1525(t_small_parse_table_array *v)
{
	v->a[30500] = sym_variable_name;
	v->a[30501] = actions(1075);
	v->a[30502] = 1;
	v->a[30503] = sym_file_descriptor;
	v->a[30504] = state(1115);
	v->a[30505] = 2;
	v->a[30506] = sym_variable_assignment;
	v->a[30507] = aux_sym__variable_assignments_repeat1;
	v->a[30508] = state(1062);
	v->a[30509] = 3;
	v->a[30510] = sym_file_redirect;
	v->a[30511] = sym_heredoc_redirect;
	v->a[30512] = aux_sym_redirected_statement_repeat1;
	v->a[30513] = actions(780);
	v->a[30514] = 8;
	v->a[30515] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30516] = anon_sym_DOLLAR;
	v->a[30517] = anon_sym_DQUOTE;
	v->a[30518] = sym_raw_string;
	v->a[30519] = sym_number;
	small_parse_table_1526(v);
}

void	small_parse_table_1526(t_small_parse_table_array *v)
{
	v->a[30520] = anon_sym_DOLLAR_LBRACE;
	v->a[30521] = anon_sym_DOLLAR_LPAREN;
	v->a[30522] = sym_word;
	v->a[30523] = actions(782);
	v->a[30524] = 16;
	v->a[30525] = anon_sym_PIPE;
	v->a[30526] = anon_sym_SEMI_SEMI;
	v->a[30527] = anon_sym_AMP_AMP;
	v->a[30528] = anon_sym_PIPE_PIPE;
	v->a[30529] = anon_sym_LT;
	v->a[30530] = anon_sym_GT;
	v->a[30531] = anon_sym_GT_GT;
	v->a[30532] = anon_sym_LT_AMP;
	v->a[30533] = anon_sym_GT_AMP;
	v->a[30534] = anon_sym_GT_PIPE;
	v->a[30535] = anon_sym_LT_GT;
	v->a[30536] = anon_sym_LT_LT;
	v->a[30537] = anon_sym_LT_LT_DASH;
	v->a[30538] = aux_sym_heredoc_redirect_token1;
	v->a[30539] = anon_sym_BQUOTE;
	small_parse_table_1527(v);
}

void	small_parse_table_1527(t_small_parse_table_array *v)
{
	v->a[30540] = anon_sym_SEMI;
	v->a[30541] = 20;
	v->a[30542] = actions(3);
	v->a[30543] = 1;
	v->a[30544] = sym_comment;
	v->a[30545] = actions(17);
	v->a[30546] = 1;
	v->a[30547] = anon_sym_LPAREN;
	v->a[30548] = actions(25);
	v->a[30549] = 1;
	v->a[30550] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30551] = actions(27);
	v->a[30552] = 1;
	v->a[30553] = anon_sym_DOLLAR;
	v->a[30554] = actions(29);
	v->a[30555] = 1;
	v->a[30556] = anon_sym_DQUOTE;
	v->a[30557] = actions(33);
	v->a[30558] = 1;
	v->a[30559] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1528(v);
}

void	small_parse_table_1528(t_small_parse_table_array *v)
{
	v->a[30560] = actions(35);
	v->a[30561] = 1;
	v->a[30562] = anon_sym_DOLLAR_LPAREN;
	v->a[30563] = actions(37);
	v->a[30564] = 1;
	v->a[30565] = anon_sym_BQUOTE;
	v->a[30566] = actions(41);
	v->a[30567] = 1;
	v->a[30568] = sym_variable_name;
	v->a[30569] = actions(1095);
	v->a[30570] = 1;
	v->a[30571] = sym_file_descriptor;
	v->a[30572] = state(174);
	v->a[30573] = 1;
	v->a[30574] = sym_command_name;
	v->a[30575] = state(625);
	v->a[30576] = 1;
	v->a[30577] = aux_sym_command_repeat1;
	v->a[30578] = state(627);
	v->a[30579] = 1;
	small_parse_table_1529(v);
}

void	small_parse_table_1529(t_small_parse_table_array *v)
{
	v->a[30580] = sym_concatenation;
	v->a[30581] = state(686);
	v->a[30582] = 1;
	v->a[30583] = sym_variable_assignment;
	v->a[30584] = state(1121);
	v->a[30585] = 1;
	v->a[30586] = sym_command;
	v->a[30587] = state(1171);
	v->a[30588] = 1;
	v->a[30589] = sym_subshell;
	v->a[30590] = state(1203);
	v->a[30591] = 1;
	v->a[30592] = sym_file_redirect;
	v->a[30593] = actions(31);
	v->a[30594] = 3;
	v->a[30595] = sym_raw_string;
	v->a[30596] = sym_number;
	v->a[30597] = sym_word;
	v->a[30598] = state(373);
	v->a[30599] = 5;
	small_parse_table_1530(v);
}

/* EOF small_parse_table_305.c */
