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
	v->a[30500] = sym_file_descriptor;
	v->a[30501] = sym__concat;
	v->a[30502] = sym__bare_dollar;
	v->a[30503] = actions(983);
	v->a[30504] = 31;
	v->a[30505] = anon_sym_esac;
	v->a[30506] = anon_sym_LPAREN;
	v->a[30507] = anon_sym_PIPE;
	v->a[30508] = anon_sym_SEMI_SEMI;
	v->a[30509] = anon_sym_AMP_AMP;
	v->a[30510] = anon_sym_PIPE_PIPE;
	v->a[30511] = anon_sym_LT;
	v->a[30512] = anon_sym_GT;
	v->a[30513] = anon_sym_GT_GT;
	v->a[30514] = anon_sym_AMP_GT;
	v->a[30515] = anon_sym_AMP_GT_GT;
	v->a[30516] = anon_sym_LT_AMP;
	v->a[30517] = anon_sym_GT_AMP;
	v->a[30518] = anon_sym_GT_PIPE;
	v->a[30519] = anon_sym_LT_AMP_DASH;
	small_parse_table_1526(v);
}

void	small_parse_table_1526(t_small_parse_table_array *v)
{
	v->a[30520] = anon_sym_GT_AMP_DASH;
	v->a[30521] = anon_sym_LT_LT;
	v->a[30522] = anon_sym_LT_LT_DASH;
	v->a[30523] = aux_sym_heredoc_redirect_token1;
	v->a[30524] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30525] = anon_sym_AMP;
	v->a[30526] = aux_sym_concatenation_token1;
	v->a[30527] = anon_sym_DOLLAR;
	v->a[30528] = anon_sym_DQUOTE;
	v->a[30529] = sym_raw_string;
	v->a[30530] = sym_number;
	v->a[30531] = anon_sym_DOLLAR_LBRACE;
	v->a[30532] = anon_sym_DOLLAR_LPAREN;
	v->a[30533] = anon_sym_BQUOTE;
	v->a[30534] = sym_word;
	v->a[30535] = anon_sym_SEMI;
	v->a[30536] = 5;
	v->a[30537] = actions(3);
	v->a[30538] = 1;
	v->a[30539] = sym_comment;
	small_parse_table_1527(v);
}

void	small_parse_table_1527(t_small_parse_table_array *v)
{
	v->a[30540] = actions(538);
	v->a[30541] = 2;
	v->a[30542] = sym_file_descriptor;
	v->a[30543] = sym_variable_name;
	v->a[30544] = state(383);
	v->a[30545] = 2;
	v->a[30546] = sym_concatenation;
	v->a[30547] = aux_sym_for_statement_repeat1;
	v->a[30548] = state(795);
	v->a[30549] = 5;
	v->a[30550] = sym_arithmetic_expansion;
	v->a[30551] = sym_string;
	v->a[30552] = sym_simple_expansion;
	v->a[30553] = sym_expansion;
	v->a[30554] = sym_command_substitution;
	v->a[30555] = actions(540);
	v->a[30556] = 25;
	v->a[30557] = anon_sym_PIPE;
	v->a[30558] = anon_sym_AMP_AMP;
	v->a[30559] = anon_sym_PIPE_PIPE;
	small_parse_table_1528(v);
}

void	small_parse_table_1528(t_small_parse_table_array *v)
{
	v->a[30560] = anon_sym_LT;
	v->a[30561] = anon_sym_GT;
	v->a[30562] = anon_sym_GT_GT;
	v->a[30563] = anon_sym_AMP_GT;
	v->a[30564] = anon_sym_AMP_GT_GT;
	v->a[30565] = anon_sym_LT_AMP;
	v->a[30566] = anon_sym_GT_AMP;
	v->a[30567] = anon_sym_GT_PIPE;
	v->a[30568] = anon_sym_LT_AMP_DASH;
	v->a[30569] = anon_sym_GT_AMP_DASH;
	v->a[30570] = anon_sym_LT_LT;
	v->a[30571] = anon_sym_LT_LT_DASH;
	v->a[30572] = aux_sym_heredoc_redirect_token1;
	v->a[30573] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30574] = anon_sym_DOLLAR;
	v->a[30575] = anon_sym_DQUOTE;
	v->a[30576] = sym_raw_string;
	v->a[30577] = sym_number;
	v->a[30578] = anon_sym_DOLLAR_LBRACE;
	v->a[30579] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1529(v);
}

void	small_parse_table_1529(t_small_parse_table_array *v)
{
	v->a[30580] = anon_sym_BQUOTE;
	v->a[30581] = sym_word;
	v->a[30582] = 3;
	v->a[30583] = actions(3);
	v->a[30584] = 1;
	v->a[30585] = sym_comment;
	v->a[30586] = actions(1195);
	v->a[30587] = 4;
	v->a[30588] = sym_file_descriptor;
	v->a[30589] = sym__concat;
	v->a[30590] = sym__bare_dollar;
	v->a[30591] = ts_builtin_sym_end;
	v->a[30592] = actions(1193);
	v->a[30593] = 30;
	v->a[30594] = anon_sym_LPAREN;
	v->a[30595] = anon_sym_PIPE;
	v->a[30596] = anon_sym_SEMI_SEMI;
	v->a[30597] = anon_sym_AMP_AMP;
	v->a[30598] = anon_sym_PIPE_PIPE;
	v->a[30599] = anon_sym_LT;
	small_parse_table_1530(v);
}

/* EOF small_parse_table_305.c */
