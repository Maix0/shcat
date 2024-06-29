/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_785.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3925(t_small_parse_table_array *v)
{
	v->a[78500] = actions(2833);
	v->a[78501] = 1;
	v->a[78502] = sym__bare_dollar;
	v->a[78503] = actions(2829);
	v->a[78504] = 5;
	v->a[78505] = aux_sym_concatenation_token1;
	v->a[78506] = sym_raw_string;
	v->a[78507] = sym_number;
	v->a[78508] = sym__comment_word;
	v->a[78509] = sym_word;
	v->a[78510] = state(1436);
	v->a[78511] = 5;
	v->a[78512] = sym_arithmetic_expansion;
	v->a[78513] = sym_string;
	v->a[78514] = sym_simple_expansion;
	v->a[78515] = sym_expansion;
	v->a[78516] = sym_command_substitution;
	v->a[78517] = 12;
	v->a[78518] = actions(3);
	v->a[78519] = 1;
	small_parse_table_3926(v);
}

void	small_parse_table_3926(t_small_parse_table_array *v)
{
	v->a[78520] = sym_comment;
	v->a[78521] = actions(859);
	v->a[78522] = 1;
	v->a[78523] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78524] = actions(861);
	v->a[78525] = 1;
	v->a[78526] = anon_sym_DOLLAR;
	v->a[78527] = actions(863);
	v->a[78528] = 1;
	v->a[78529] = anon_sym_DQUOTE;
	v->a[78530] = actions(865);
	v->a[78531] = 1;
	v->a[78532] = anon_sym_DOLLAR_LBRACE;
	v->a[78533] = actions(867);
	v->a[78534] = 1;
	v->a[78535] = anon_sym_DOLLAR_LPAREN;
	v->a[78536] = actions(869);
	v->a[78537] = 1;
	v->a[78538] = anon_sym_BQUOTE;
	v->a[78539] = actions(2835);
	small_parse_table_3927(v);
}

void	small_parse_table_3927(t_small_parse_table_array *v)
{
	v->a[78540] = 1;
	v->a[78541] = aux_sym_heredoc_redirect_token1;
	v->a[78542] = state(1577);
	v->a[78543] = 1;
	v->a[78544] = aux_sym__heredoc_command;
	v->a[78545] = state(1953);
	v->a[78546] = 1;
	v->a[78547] = sym_concatenation;
	v->a[78548] = actions(847);
	v->a[78549] = 3;
	v->a[78550] = sym_raw_string;
	v->a[78551] = sym_number;
	v->a[78552] = sym_word;
	v->a[78553] = state(1788);
	v->a[78554] = 5;
	v->a[78555] = sym_arithmetic_expansion;
	v->a[78556] = sym_string;
	v->a[78557] = sym_simple_expansion;
	v->a[78558] = sym_expansion;
	v->a[78559] = sym_command_substitution;
	small_parse_table_3928(v);
}

void	small_parse_table_3928(t_small_parse_table_array *v)
{
	v->a[78560] = 10;
	v->a[78561] = actions(3);
	v->a[78562] = 1;
	v->a[78563] = sym_comment;
	v->a[78564] = actions(2737);
	v->a[78565] = 1;
	v->a[78566] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78567] = actions(2741);
	v->a[78568] = 1;
	v->a[78569] = anon_sym_DQUOTE;
	v->a[78570] = actions(2743);
	v->a[78571] = 1;
	v->a[78572] = anon_sym_DOLLAR_LBRACE;
	v->a[78573] = actions(2745);
	v->a[78574] = 1;
	v->a[78575] = anon_sym_DOLLAR_LPAREN;
	v->a[78576] = actions(2747);
	v->a[78577] = 1;
	v->a[78578] = anon_sym_BQUOTE;
	v->a[78579] = actions(2749);
	small_parse_table_3929(v);
}

void	small_parse_table_3929(t_small_parse_table_array *v)
{
	v->a[78580] = 1;
	v->a[78581] = sym__bare_dollar;
	v->a[78582] = actions(2837);
	v->a[78583] = 1;
	v->a[78584] = anon_sym_DOLLAR;
	v->a[78585] = actions(2735);
	v->a[78586] = 5;
	v->a[78587] = aux_sym_concatenation_token1;
	v->a[78588] = sym_raw_string;
	v->a[78589] = sym_number;
	v->a[78590] = sym__comment_word;
	v->a[78591] = sym_word;
	v->a[78592] = state(1177);
	v->a[78593] = 5;
	v->a[78594] = sym_arithmetic_expansion;
	v->a[78595] = sym_string;
	v->a[78596] = sym_simple_expansion;
	v->a[78597] = sym_expansion;
	v->a[78598] = sym_command_substitution;
	v->a[78599] = 6;
	small_parse_table_3930(v);
}

/* EOF small_parse_table_785.c */
