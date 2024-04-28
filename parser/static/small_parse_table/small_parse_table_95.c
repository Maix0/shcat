/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_95.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_475(t_small_parse_table_array *v)
{
	v->a[9500] = sym_ansi_c_string;
	v->a[9501] = anon_sym_DOLLAR_LBRACE;
	v->a[9502] = anon_sym_BQUOTE;
	v->a[9503] = anon_sym_DOLLAR_BQUOTE;
	v->a[9504] = anon_sym_LT_LPAREN;
	v->a[9505] = anon_sym_GT_LPAREN;
	v->a[9506] = actions(2715);
	v->a[9507] = 28;
	v->a[9508] = anon_sym_for;
	v->a[9509] = anon_sym_select;
	v->a[9510] = anon_sym_LT;
	v->a[9511] = anon_sym_GT;
	v->a[9512] = anon_sym_LPAREN;
	v->a[9513] = anon_sym_while;
	v->a[9514] = anon_sym_until;
	v->a[9515] = anon_sym_if;
	v->a[9516] = anon_sym_case;
	v->a[9517] = anon_sym_function;
	v->a[9518] = anon_sym_BANG;
	v->a[9519] = anon_sym_LBRACK;
	small_parse_table_476(v);
}

void	small_parse_table_476(t_small_parse_table_array *v)
{
	v->a[9520] = anon_sym_declare;
	v->a[9521] = anon_sym_typeset;
	v->a[9522] = anon_sym_export;
	v->a[9523] = anon_sym_readonly;
	v->a[9524] = anon_sym_local;
	v->a[9525] = anon_sym_unset;
	v->a[9526] = anon_sym_unsetenv;
	v->a[9527] = anon_sym_AMP_GT;
	v->a[9528] = anon_sym_LT_AMP;
	v->a[9529] = anon_sym_GT_AMP;
	v->a[9530] = anon_sym_DOLLAR;
	v->a[9531] = sym__special_character;
	v->a[9532] = aux_sym_number_token1;
	v->a[9533] = aux_sym_number_token2;
	v->a[9534] = anon_sym_DOLLAR_LPAREN;
	v->a[9535] = sym_word;
	v->a[9536] = 5;
	v->a[9537] = actions(71);
	v->a[9538] = 1;
	v->a[9539] = sym_comment;
	small_parse_table_477(v);
}

void	small_parse_table_477(t_small_parse_table_array *v)
{
	v->a[9540] = actions(2727);
	v->a[9541] = 1;
	v->a[9542] = anon_sym_SEMI_SEMI;
	v->a[9543] = actions(2725);
	v->a[9544] = 3;
	v->a[9545] = anon_sym_RPAREN;
	v->a[9546] = anon_sym_SEMI_AMP;
	v->a[9547] = anon_sym_SEMI_SEMI_AMP;
	v->a[9548] = actions(2717);
	v->a[9549] = 23;
	v->a[9550] = sym_file_descriptor;
	v->a[9551] = sym_variable_name;
	v->a[9552] = sym_test_operator;
	v->a[9553] = sym__brace_start;
	v->a[9554] = anon_sym_LPAREN_LPAREN;
	v->a[9555] = anon_sym_GT_GT;
	v->a[9556] = anon_sym_LBRACE;
	v->a[9557] = anon_sym_LBRACK_LBRACK;
	v->a[9558] = anon_sym_AMP_GT_GT;
	v->a[9559] = anon_sym_GT_PIPE;
	small_parse_table_478(v);
}

void	small_parse_table_478(t_small_parse_table_array *v)
{
	v->a[9560] = anon_sym_LT_AMP_DASH;
	v->a[9561] = anon_sym_GT_AMP_DASH;
	v->a[9562] = anon_sym_LT_LT_LT;
	v->a[9563] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9564] = anon_sym_DOLLAR_LBRACK;
	v->a[9565] = anon_sym_DQUOTE;
	v->a[9566] = sym_raw_string;
	v->a[9567] = sym_ansi_c_string;
	v->a[9568] = anon_sym_DOLLAR_LBRACE;
	v->a[9569] = anon_sym_BQUOTE;
	v->a[9570] = anon_sym_DOLLAR_BQUOTE;
	v->a[9571] = anon_sym_LT_LPAREN;
	v->a[9572] = anon_sym_GT_LPAREN;
	v->a[9573] = actions(2715);
	v->a[9574] = 28;
	v->a[9575] = anon_sym_for;
	v->a[9576] = anon_sym_select;
	v->a[9577] = anon_sym_LT;
	v->a[9578] = anon_sym_GT;
	v->a[9579] = anon_sym_LPAREN;
	small_parse_table_479(v);
}

void	small_parse_table_479(t_small_parse_table_array *v)
{
	v->a[9580] = anon_sym_while;
	v->a[9581] = anon_sym_until;
	v->a[9582] = anon_sym_if;
	v->a[9583] = anon_sym_case;
	v->a[9584] = anon_sym_function;
	v->a[9585] = anon_sym_BANG;
	v->a[9586] = anon_sym_LBRACK;
	v->a[9587] = anon_sym_declare;
	v->a[9588] = anon_sym_typeset;
	v->a[9589] = anon_sym_export;
	v->a[9590] = anon_sym_readonly;
	v->a[9591] = anon_sym_local;
	v->a[9592] = anon_sym_unset;
	v->a[9593] = anon_sym_unsetenv;
	v->a[9594] = anon_sym_AMP_GT;
	v->a[9595] = anon_sym_LT_AMP;
	v->a[9596] = anon_sym_GT_AMP;
	v->a[9597] = anon_sym_DOLLAR;
	v->a[9598] = sym__special_character;
	v->a[9599] = aux_sym_number_token1;
	small_parse_table_480(v);
}

/* EOF small_parse_table_95.c */
