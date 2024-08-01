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
	v->a[30500] = 9;
	v->a[30501] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30502] = anon_sym_DOLLAR;
	v->a[30503] = anon_sym_DQUOTE;
	v->a[30504] = sym_raw_string;
	v->a[30505] = sym_number;
	v->a[30506] = anon_sym_DOLLAR_LBRACE;
	v->a[30507] = anon_sym_DOLLAR_LPAREN;
	v->a[30508] = anon_sym_BQUOTE;
	v->a[30509] = sym_word;
	v->a[30510] = 15;
	v->a[30511] = actions(3);
	v->a[30512] = 1;
	v->a[30513] = sym_comment;
	v->a[30514] = actions(778);
	v->a[30515] = 1;
	v->a[30516] = anon_sym_LPAREN;
	v->a[30517] = actions(782);
	v->a[30518] = 1;
	v->a[30519] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1526(v);
}

void	small_parse_table_1526(t_small_parse_table_array *v)
{
	v->a[30520] = actions(784);
	v->a[30521] = 1;
	v->a[30522] = anon_sym_DOLLAR;
	v->a[30523] = actions(786);
	v->a[30524] = 1;
	v->a[30525] = anon_sym_DQUOTE;
	v->a[30526] = actions(788);
	v->a[30527] = 1;
	v->a[30528] = anon_sym_DOLLAR_LBRACE;
	v->a[30529] = actions(790);
	v->a[30530] = 1;
	v->a[30531] = anon_sym_DOLLAR_LPAREN;
	v->a[30532] = actions(792);
	v->a[30533] = 1;
	v->a[30534] = anon_sym_BQUOTE;
	v->a[30535] = actions(794);
	v->a[30536] = 1;
	v->a[30537] = sym_extglob_pattern;
	v->a[30538] = state(597);
	v->a[30539] = 1;
	small_parse_table_1527(v);
}

void	small_parse_table_1527(t_small_parse_table_array *v)
{
	v->a[30540] = aux_sym_case_statement_repeat1;
	v->a[30541] = state(1232);
	v->a[30542] = 1;
	v->a[30543] = sym_case_item;
	v->a[30544] = state(1749);
	v->a[30545] = 1;
	v->a[30546] = sym__case_item_last;
	v->a[30547] = state(1538);
	v->a[30548] = 2;
	v->a[30549] = sym_concatenation;
	v->a[30550] = sym__extglob_blob;
	v->a[30551] = actions(774);
	v->a[30552] = 3;
	v->a[30553] = sym_raw_string;
	v->a[30554] = sym_number;
	v->a[30555] = sym_word;
	v->a[30556] = state(1468);
	v->a[30557] = 5;
	v->a[30558] = sym_arithmetic_expansion;
	v->a[30559] = sym_string;
	small_parse_table_1528(v);
}

void	small_parse_table_1528(t_small_parse_table_array *v)
{
	v->a[30560] = sym_simple_expansion;
	v->a[30561] = sym_expansion;
	v->a[30562] = sym_command_substitution;
	v->a[30563] = 3;
	v->a[30564] = actions(3);
	v->a[30565] = 1;
	v->a[30566] = sym_comment;
	v->a[30567] = actions(911);
	v->a[30568] = 1;
	v->a[30569] = sym__bare_dollar;
	v->a[30570] = actions(909);
	v->a[30571] = 20;
	v->a[30572] = anon_sym_esac;
	v->a[30573] = anon_sym_PIPE;
	v->a[30574] = anon_sym_SEMI_SEMI;
	v->a[30575] = anon_sym_AMP_AMP;
	v->a[30576] = anon_sym_PIPE_PIPE;
	v->a[30577] = anon_sym_LT;
	v->a[30578] = anon_sym_GT;
	v->a[30579] = anon_sym_GT_GT;
	small_parse_table_1529(v);
}

void	small_parse_table_1529(t_small_parse_table_array *v)
{
	v->a[30580] = anon_sym_LT_LT;
	v->a[30581] = aux_sym_heredoc_redirect_token1;
	v->a[30582] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30583] = anon_sym_DOLLAR;
	v->a[30584] = anon_sym_DQUOTE;
	v->a[30585] = sym_raw_string;
	v->a[30586] = sym_number;
	v->a[30587] = anon_sym_DOLLAR_LBRACE;
	v->a[30588] = anon_sym_DOLLAR_LPAREN;
	v->a[30589] = anon_sym_BQUOTE;
	v->a[30590] = sym_word;
	v->a[30591] = anon_sym_SEMI;
	v->a[30592] = 15;
	v->a[30593] = actions(3);
	v->a[30594] = 1;
	v->a[30595] = sym_comment;
	v->a[30596] = actions(778);
	v->a[30597] = 1;
	v->a[30598] = anon_sym_LPAREN;
	v->a[30599] = actions(782);
	small_parse_table_1530(v);
}

/* EOF small_parse_table_305.c */
