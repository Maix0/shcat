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
	v->a[30500] = anon_sym_PIPE_PIPE;
	v->a[30501] = anon_sym_LT;
	v->a[30502] = anon_sym_GT;
	v->a[30503] = anon_sym_GT_GT;
	v->a[30504] = anon_sym_LT_AMP;
	v->a[30505] = anon_sym_GT_AMP;
	v->a[30506] = anon_sym_GT_PIPE;
	v->a[30507] = anon_sym_LT_GT;
	v->a[30508] = anon_sym_LT_LT;
	v->a[30509] = anon_sym_LT_LT_DASH;
	v->a[30510] = aux_sym_heredoc_redirect_token1;
	v->a[30511] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30512] = anon_sym_DOLLAR;
	v->a[30513] = anon_sym_DQUOTE;
	v->a[30514] = sym_raw_string;
	v->a[30515] = sym_number;
	v->a[30516] = anon_sym_DOLLAR_LBRACE;
	v->a[30517] = anon_sym_DOLLAR_LPAREN;
	v->a[30518] = anon_sym_BQUOTE;
	v->a[30519] = sym_word;
	small_parse_table_1526(v);
}

void	small_parse_table_1526(t_small_parse_table_array *v)
{
	v->a[30520] = 20;
	v->a[30521] = actions(3);
	v->a[30522] = 1;
	v->a[30523] = sym_comment;
	v->a[30524] = actions(17);
	v->a[30525] = 1;
	v->a[30526] = anon_sym_LPAREN;
	v->a[30527] = actions(25);
	v->a[30528] = 1;
	v->a[30529] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30530] = actions(27);
	v->a[30531] = 1;
	v->a[30532] = anon_sym_DOLLAR;
	v->a[30533] = actions(29);
	v->a[30534] = 1;
	v->a[30535] = anon_sym_DQUOTE;
	v->a[30536] = actions(33);
	v->a[30537] = 1;
	v->a[30538] = anon_sym_DOLLAR_LBRACE;
	v->a[30539] = actions(35);
	small_parse_table_1527(v);
}

void	small_parse_table_1527(t_small_parse_table_array *v)
{
	v->a[30540] = 1;
	v->a[30541] = anon_sym_DOLLAR_LPAREN;
	v->a[30542] = actions(37);
	v->a[30543] = 1;
	v->a[30544] = anon_sym_BQUOTE;
	v->a[30545] = actions(41);
	v->a[30546] = 1;
	v->a[30547] = sym_variable_name;
	v->a[30548] = actions(1152);
	v->a[30549] = 1;
	v->a[30550] = sym_file_descriptor;
	v->a[30551] = state(171);
	v->a[30552] = 1;
	v->a[30553] = sym_command_name;
	v->a[30554] = state(588);
	v->a[30555] = 1;
	v->a[30556] = sym_concatenation;
	v->a[30557] = state(656);
	v->a[30558] = 1;
	v->a[30559] = sym_variable_assignment;
	small_parse_table_1528(v);
}

void	small_parse_table_1528(t_small_parse_table_array *v)
{
	v->a[30560] = state(661);
	v->a[30561] = 1;
	v->a[30562] = aux_sym_command_repeat1;
	v->a[30563] = state(1096);
	v->a[30564] = 1;
	v->a[30565] = sym_subshell;
	v->a[30566] = state(1097);
	v->a[30567] = 1;
	v->a[30568] = sym_command;
	v->a[30569] = state(1225);
	v->a[30570] = 1;
	v->a[30571] = sym_file_redirect;
	v->a[30572] = actions(31);
	v->a[30573] = 3;
	v->a[30574] = sym_raw_string;
	v->a[30575] = sym_number;
	v->a[30576] = sym_word;
	v->a[30577] = state(365);
	v->a[30578] = 5;
	v->a[30579] = sym_arithmetic_expansion;
	small_parse_table_1529(v);
}

void	small_parse_table_1529(t_small_parse_table_array *v)
{
	v->a[30580] = sym_string;
	v->a[30581] = sym_simple_expansion;
	v->a[30582] = sym_expansion;
	v->a[30583] = sym_command_substitution;
	v->a[30584] = actions(1150);
	v->a[30585] = 7;
	v->a[30586] = anon_sym_LT;
	v->a[30587] = anon_sym_GT;
	v->a[30588] = anon_sym_GT_GT;
	v->a[30589] = anon_sym_LT_AMP;
	v->a[30590] = anon_sym_GT_AMP;
	v->a[30591] = anon_sym_GT_PIPE;
	v->a[30592] = anon_sym_LT_GT;
	v->a[30593] = 20;
	v->a[30594] = actions(3);
	v->a[30595] = 1;
	v->a[30596] = sym_comment;
	v->a[30597] = actions(97);
	v->a[30598] = 1;
	v->a[30599] = anon_sym_LPAREN;
	small_parse_table_1530(v);
}

/* EOF small_parse_table_305.c */
