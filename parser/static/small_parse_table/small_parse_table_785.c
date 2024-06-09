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
	v->a[78500] = 1;
	v->a[78501] = anon_sym_DOLLAR_LBRACE;
	v->a[78502] = actions(990);
	v->a[78503] = 1;
	v->a[78504] = anon_sym_DOLLAR_LPAREN;
	v->a[78505] = actions(992);
	v->a[78506] = 1;
	v->a[78507] = anon_sym_BQUOTE;
	v->a[78508] = actions(3134);
	v->a[78509] = 1;
	v->a[78510] = sym__bare_dollar;
	v->a[78511] = actions(3130);
	v->a[78512] = 3;
	v->a[78513] = sym_raw_string;
	v->a[78514] = sym__comment_word;
	v->a[78515] = sym_word;
	v->a[78516] = state(1195);
	v->a[78517] = 6;
	v->a[78518] = sym_arithmetic_expansion;
	v->a[78519] = sym_string;
	small_parse_table_3926(v);
}

void	small_parse_table_3926(t_small_parse_table_array *v)
{
	v->a[78520] = sym_number;
	v->a[78521] = sym_simple_expansion;
	v->a[78522] = sym_expansion;
	v->a[78523] = sym_command_substitution;
	v->a[78524] = 9;
	v->a[78525] = actions(1404);
	v->a[78526] = 1;
	v->a[78527] = sym_comment;
	v->a[78528] = actions(3046);
	v->a[78529] = 1;
	v->a[78530] = anon_sym_LT_LT;
	v->a[78531] = actions(3048);
	v->a[78532] = 1;
	v->a[78533] = anon_sym_LT_LT_DASH;
	v->a[78534] = actions(3050);
	v->a[78535] = 1;
	v->a[78536] = sym_file_descriptor;
	v->a[78537] = actions(3044);
	v->a[78538] = 2;
	v->a[78539] = anon_sym_LT_AMP_DASH;
	small_parse_table_3927(v);
}

void	small_parse_table_3927(t_small_parse_table_array *v)
{
	v->a[78540] = anon_sym_GT_AMP_DASH;
	v->a[78541] = actions(3214);
	v->a[78542] = 2;
	v->a[78543] = anon_sym_AMP_AMP;
	v->a[78544] = anon_sym_PIPE_PIPE;
	v->a[78545] = actions(3042);
	v->a[78546] = 3;
	v->a[78547] = anon_sym_GT_GT;
	v->a[78548] = anon_sym_AMP_GT_GT;
	v->a[78549] = anon_sym_GT_PIPE;
	v->a[78550] = state(1351);
	v->a[78551] = 3;
	v->a[78552] = sym_file_redirect;
	v->a[78553] = sym_heredoc_redirect;
	v->a[78554] = aux_sym_redirected_statement_repeat1;
	v->a[78555] = actions(3040);
	v->a[78556] = 5;
	v->a[78557] = anon_sym_LT;
	v->a[78558] = anon_sym_GT;
	v->a[78559] = anon_sym_AMP_GT;
	small_parse_table_3928(v);
}

void	small_parse_table_3928(t_small_parse_table_array *v)
{
	v->a[78560] = anon_sym_LT_AMP;
	v->a[78561] = anon_sym_GT_AMP;
	v->a[78562] = 12;
	v->a[78563] = actions(3);
	v->a[78564] = 1;
	v->a[78565] = sym_comment;
	v->a[78566] = actions(905);
	v->a[78567] = 1;
	v->a[78568] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78569] = actions(909);
	v->a[78570] = 1;
	v->a[78571] = anon_sym_DQUOTE;
	v->a[78572] = actions(911);
	v->a[78573] = 1;
	v->a[78574] = aux_sym_number_token1;
	v->a[78575] = actions(913);
	v->a[78576] = 1;
	v->a[78577] = aux_sym_number_token2;
	v->a[78578] = actions(915);
	v->a[78579] = 1;
	small_parse_table_3929(v);
}

void	small_parse_table_3929(t_small_parse_table_array *v)
{
	v->a[78580] = anon_sym_DOLLAR_LBRACE;
	v->a[78581] = actions(917);
	v->a[78582] = 1;
	v->a[78583] = anon_sym_DOLLAR_LPAREN;
	v->a[78584] = actions(919);
	v->a[78585] = 1;
	v->a[78586] = anon_sym_BQUOTE;
	v->a[78587] = actions(3077);
	v->a[78588] = 1;
	v->a[78589] = sym__bare_dollar;
	v->a[78590] = actions(3216);
	v->a[78591] = 1;
	v->a[78592] = anon_sym_DOLLAR;
	v->a[78593] = actions(3075);
	v->a[78594] = 3;
	v->a[78595] = sym_raw_string;
	v->a[78596] = sym__comment_word;
	v->a[78597] = sym_word;
	v->a[78598] = state(981);
	v->a[78599] = 6;
	small_parse_table_3930(v);
}

/* EOF small_parse_table_785.c */
