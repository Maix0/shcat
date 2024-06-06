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
	v->a[30500] = anon_sym_SEMI_SEMI;
	v->a[30501] = anon_sym_SEMI_AMP;
	v->a[30502] = anon_sym_SEMI_SEMI_AMP;
	v->a[30503] = anon_sym_PIPE_AMP;
	v->a[30504] = anon_sym_AMP_AMP;
	v->a[30505] = anon_sym_PIPE_PIPE;
	v->a[30506] = anon_sym_LT;
	v->a[30507] = anon_sym_GT;
	v->a[30508] = anon_sym_GT_GT;
	v->a[30509] = anon_sym_AMP_GT;
	v->a[30510] = anon_sym_AMP_GT_GT;
	v->a[30511] = anon_sym_LT_AMP;
	v->a[30512] = anon_sym_GT_AMP;
	v->a[30513] = anon_sym_GT_PIPE;
	v->a[30514] = anon_sym_LT_AMP_DASH;
	v->a[30515] = anon_sym_GT_AMP_DASH;
	v->a[30516] = anon_sym_LT_LT;
	v->a[30517] = anon_sym_LT_LT_DASH;
	v->a[30518] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30519] = anon_sym_AMP;
	small_parse_table_1526(v);
}

void	small_parse_table_1526(t_small_parse_table_array *v)
{
	v->a[30520] = aux_sym_concatenation_token1;
	v->a[30521] = anon_sym_DOLLAR;
	v->a[30522] = sym__special_character;
	v->a[30523] = anon_sym_DQUOTE;
	v->a[30524] = sym_raw_string;
	v->a[30525] = aux_sym_number_token1;
	v->a[30526] = aux_sym_number_token2;
	v->a[30527] = anon_sym_DOLLAR_LBRACE;
	v->a[30528] = anon_sym_DOLLAR_LPAREN;
	v->a[30529] = anon_sym_BQUOTE;
	v->a[30530] = anon_sym_DOLLAR_BQUOTE;
	v->a[30531] = sym_word;
	v->a[30532] = anon_sym_SEMI;
	v->a[30533] = 6;
	v->a[30534] = actions(3);
	v->a[30535] = 1;
	v->a[30536] = sym_comment;
	v->a[30537] = actions(3288);
	v->a[30538] = 1;
	v->a[30539] = aux_sym_concatenation_token1;
	small_parse_table_1527(v);
}

void	small_parse_table_1527(t_small_parse_table_array *v)
{
	v->a[30540] = actions(3385);
	v->a[30541] = 1;
	v->a[30542] = sym__concat;
	v->a[30543] = state(640);
	v->a[30544] = 1;
	v->a[30545] = aux_sym_concatenation_repeat1;
	v->a[30546] = actions(2690);
	v->a[30547] = 6;
	v->a[30548] = sym_file_descriptor;
	v->a[30549] = sym_test_operator;
	v->a[30550] = sym__bare_dollar;
	v->a[30551] = sym__brace_start;
	v->a[30552] = ts_builtin_sym_end;
	v->a[30553] = aux_sym_heredoc_redirect_token1;
	v->a[30554] = actions(2688);
	v->a[30555] = 32;
	v->a[30556] = anon_sym_LPAREN;
	v->a[30557] = anon_sym_PIPE;
	v->a[30558] = anon_sym_SEMI_SEMI;
	v->a[30559] = anon_sym_PIPE_AMP;
	small_parse_table_1528(v);
}

void	small_parse_table_1528(t_small_parse_table_array *v)
{
	v->a[30560] = anon_sym_AMP_AMP;
	v->a[30561] = anon_sym_PIPE_PIPE;
	v->a[30562] = anon_sym_LT;
	v->a[30563] = anon_sym_GT;
	v->a[30564] = anon_sym_GT_GT;
	v->a[30565] = anon_sym_AMP_GT;
	v->a[30566] = anon_sym_AMP_GT_GT;
	v->a[30567] = anon_sym_LT_AMP;
	v->a[30568] = anon_sym_GT_AMP;
	v->a[30569] = anon_sym_GT_PIPE;
	v->a[30570] = anon_sym_LT_AMP_DASH;
	v->a[30571] = anon_sym_GT_AMP_DASH;
	v->a[30572] = anon_sym_LT_LT;
	v->a[30573] = anon_sym_LT_LT_DASH;
	v->a[30574] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30575] = anon_sym_AMP;
	v->a[30576] = anon_sym_DOLLAR;
	v->a[30577] = sym__special_character;
	v->a[30578] = anon_sym_DQUOTE;
	v->a[30579] = sym_raw_string;
	small_parse_table_1529(v);
}

void	small_parse_table_1529(t_small_parse_table_array *v)
{
	v->a[30580] = aux_sym_number_token1;
	v->a[30581] = aux_sym_number_token2;
	v->a[30582] = anon_sym_DOLLAR_LBRACE;
	v->a[30583] = anon_sym_DOLLAR_LPAREN;
	v->a[30584] = anon_sym_BQUOTE;
	v->a[30585] = anon_sym_DOLLAR_BQUOTE;
	v->a[30586] = sym_word;
	v->a[30587] = anon_sym_SEMI;
	v->a[30588] = 6;
	v->a[30589] = actions(3);
	v->a[30590] = 1;
	v->a[30591] = sym_comment;
	v->a[30592] = actions(3358);
	v->a[30593] = 1;
	v->a[30594] = aux_sym_concatenation_token1;
	v->a[30595] = actions(3387);
	v->a[30596] = 1;
	v->a[30597] = sym__concat;
	v->a[30598] = state(666);
	v->a[30599] = 1;
	small_parse_table_1530(v);
}

/* EOF small_parse_table_305.c */
