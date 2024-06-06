/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1095.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5475(t_small_parse_table_array *v)
{
	v->a[109500] = anon_sym_BQUOTE;
	v->a[109501] = actions(5354);
	v->a[109502] = 1;
	v->a[109503] = anon_sym_DOLLAR_BQUOTE;
	v->a[109504] = actions(5360);
	v->a[109505] = 1;
	v->a[109506] = sym__brace_start;
	v->a[109507] = actions(5757);
	v->a[109508] = 1;
	v->a[109509] = sym__special_character;
	v->a[109510] = actions(6267);
	v->a[109511] = 1;
	v->a[109512] = sym_word;
	v->a[109513] = state(1237);
	v->a[109514] = 1;
	v->a[109515] = aux_sym__literal_repeat1;
	v->a[109516] = actions(6269);
	v->a[109517] = 2;
	v->a[109518] = sym_test_operator;
	v->a[109519] = sym_raw_string;
	small_parse_table_5476(v);
}

void	small_parse_table_5476(t_small_parse_table_array *v)
{
	v->a[109520] = state(423);
	v->a[109521] = 2;
	v->a[109522] = sym_concatenation;
	v->a[109523] = aux_sym_for_statement_repeat1;
	v->a[109524] = state(1107);
	v->a[109525] = 7;
	v->a[109526] = sym_arithmetic_expansion;
	v->a[109527] = sym_brace_expression;
	v->a[109528] = sym_string;
	v->a[109529] = sym_number;
	v->a[109530] = sym_simple_expansion;
	v->a[109531] = sym_expansion;
	v->a[109532] = sym_command_substitution;
	v->a[109533] = 3;
	v->a[109534] = actions(3);
	v->a[109535] = 1;
	v->a[109536] = sym_comment;
	v->a[109537] = actions(6123);
	v->a[109538] = 3;
	v->a[109539] = sym_file_descriptor;
	small_parse_table_5477(v);
}

void	small_parse_table_5477(t_small_parse_table_array *v)
{
	v->a[109540] = ts_builtin_sym_end;
	v->a[109541] = aux_sym_heredoc_redirect_token1;
	v->a[109542] = actions(6121);
	v->a[109543] = 21;
	v->a[109544] = anon_sym_PIPE;
	v->a[109545] = anon_sym_RPAREN;
	v->a[109546] = anon_sym_SEMI_SEMI;
	v->a[109547] = anon_sym_PIPE_AMP;
	v->a[109548] = anon_sym_AMP_AMP;
	v->a[109549] = anon_sym_PIPE_PIPE;
	v->a[109550] = anon_sym_LT;
	v->a[109551] = anon_sym_GT;
	v->a[109552] = anon_sym_GT_GT;
	v->a[109553] = anon_sym_AMP_GT;
	v->a[109554] = anon_sym_AMP_GT_GT;
	v->a[109555] = anon_sym_LT_AMP;
	v->a[109556] = anon_sym_GT_AMP;
	v->a[109557] = anon_sym_GT_PIPE;
	v->a[109558] = anon_sym_LT_AMP_DASH;
	v->a[109559] = anon_sym_GT_AMP_DASH;
	small_parse_table_5478(v);
}

void	small_parse_table_5478(t_small_parse_table_array *v)
{
	v->a[109560] = anon_sym_LT_LT;
	v->a[109561] = anon_sym_LT_LT_DASH;
	v->a[109562] = anon_sym_AMP;
	v->a[109563] = anon_sym_BQUOTE;
	v->a[109564] = anon_sym_SEMI;
	v->a[109565] = 3;
	v->a[109566] = actions(3);
	v->a[109567] = 1;
	v->a[109568] = sym_comment;
	v->a[109569] = actions(6127);
	v->a[109570] = 3;
	v->a[109571] = sym_file_descriptor;
	v->a[109572] = ts_builtin_sym_end;
	v->a[109573] = aux_sym_heredoc_redirect_token1;
	v->a[109574] = actions(6125);
	v->a[109575] = 21;
	v->a[109576] = anon_sym_PIPE;
	v->a[109577] = anon_sym_RPAREN;
	v->a[109578] = anon_sym_SEMI_SEMI;
	v->a[109579] = anon_sym_PIPE_AMP;
	small_parse_table_5479(v);
}

void	small_parse_table_5479(t_small_parse_table_array *v)
{
	v->a[109580] = anon_sym_AMP_AMP;
	v->a[109581] = anon_sym_PIPE_PIPE;
	v->a[109582] = anon_sym_LT;
	v->a[109583] = anon_sym_GT;
	v->a[109584] = anon_sym_GT_GT;
	v->a[109585] = anon_sym_AMP_GT;
	v->a[109586] = anon_sym_AMP_GT_GT;
	v->a[109587] = anon_sym_LT_AMP;
	v->a[109588] = anon_sym_GT_AMP;
	v->a[109589] = anon_sym_GT_PIPE;
	v->a[109590] = anon_sym_LT_AMP_DASH;
	v->a[109591] = anon_sym_GT_AMP_DASH;
	v->a[109592] = anon_sym_LT_LT;
	v->a[109593] = anon_sym_LT_LT_DASH;
	v->a[109594] = anon_sym_AMP;
	v->a[109595] = anon_sym_BQUOTE;
	v->a[109596] = anon_sym_SEMI;
	v->a[109597] = 7;
	v->a[109598] = actions(3);
	v->a[109599] = 1;
	small_parse_table_5480(v);
}

/* EOF small_parse_table_1095.c */
