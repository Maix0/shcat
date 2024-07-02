/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_635.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3175(t_small_parse_table_array *v)
{
	v->a[63500] = actions(3);
	v->a[63501] = 1;
	v->a[63502] = sym_comment;
	v->a[63503] = actions(2258);
	v->a[63504] = 3;
	v->a[63505] = sym_file_descriptor;
	v->a[63506] = ts_builtin_sym_end;
	v->a[63507] = aux_sym_heredoc_redirect_token1;
	v->a[63508] = actions(2260);
	v->a[63509] = 17;
	v->a[63510] = anon_sym_PIPE;
	v->a[63511] = anon_sym_RPAREN;
	v->a[63512] = anon_sym_SEMI_SEMI;
	v->a[63513] = anon_sym_AMP_AMP;
	v->a[63514] = anon_sym_PIPE_PIPE;
	v->a[63515] = anon_sym_LT;
	v->a[63516] = anon_sym_GT;
	v->a[63517] = anon_sym_GT_GT;
	v->a[63518] = anon_sym_LT_AMP;
	v->a[63519] = anon_sym_GT_AMP;
	small_parse_table_3176(v);
}

void	small_parse_table_3176(t_small_parse_table_array *v)
{
	v->a[63520] = anon_sym_GT_PIPE;
	v->a[63521] = anon_sym_LT_GT;
	v->a[63522] = anon_sym_LT_LT;
	v->a[63523] = anon_sym_LT_LT_DASH;
	v->a[63524] = anon_sym_AMP;
	v->a[63525] = anon_sym_BQUOTE;
	v->a[63526] = anon_sym_SEMI;
	v->a[63527] = 11;
	v->a[63528] = actions(3);
	v->a[63529] = 1;
	v->a[63530] = sym_comment;
	v->a[63531] = actions(2265);
	v->a[63532] = 1;
	v->a[63533] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63534] = actions(2268);
	v->a[63535] = 1;
	v->a[63536] = anon_sym_DOLLAR;
	v->a[63537] = actions(2271);
	v->a[63538] = 1;
	v->a[63539] = anon_sym_DQUOTE;
	small_parse_table_3177(v);
}

void	small_parse_table_3177(t_small_parse_table_array *v)
{
	v->a[63540] = actions(2274);
	v->a[63541] = 1;
	v->a[63542] = anon_sym_DOLLAR_LBRACE;
	v->a[63543] = actions(2277);
	v->a[63544] = 1;
	v->a[63545] = anon_sym_DOLLAR_LPAREN;
	v->a[63546] = actions(2280);
	v->a[63547] = 1;
	v->a[63548] = anon_sym_BQUOTE;
	v->a[63549] = state(1192);
	v->a[63550] = 2;
	v->a[63551] = sym_concatenation;
	v->a[63552] = aux_sym_for_statement_repeat1;
	v->a[63553] = actions(2262);
	v->a[63554] = 3;
	v->a[63555] = sym_raw_string;
	v->a[63556] = sym_number;
	v->a[63557] = sym_word;
	v->a[63558] = actions(520);
	v->a[63559] = 4;
	small_parse_table_3178(v);
}

void	small_parse_table_3178(t_small_parse_table_array *v)
{
	v->a[63560] = anon_sym_SEMI_SEMI;
	v->a[63561] = aux_sym_heredoc_redirect_token1;
	v->a[63562] = anon_sym_AMP;
	v->a[63563] = anon_sym_SEMI;
	v->a[63564] = state(1412);
	v->a[63565] = 5;
	v->a[63566] = sym_arithmetic_expansion;
	v->a[63567] = sym_string;
	v->a[63568] = sym_simple_expansion;
	v->a[63569] = sym_expansion;
	v->a[63570] = sym_command_substitution;
	v->a[63571] = 9;
	v->a[63572] = actions(3);
	v->a[63573] = 1;
	v->a[63574] = sym_comment;
	v->a[63575] = actions(1946);
	v->a[63576] = 1;
	v->a[63577] = sym_file_descriptor;
	v->a[63578] = actions(2028);
	v->a[63579] = 1;
	small_parse_table_3179(v);
}

void	small_parse_table_3179(t_small_parse_table_array *v)
{
	v->a[63580] = aux_sym_heredoc_redirect_token1;
	v->a[63581] = state(747);
	v->a[63582] = 1;
	v->a[63583] = sym_terminator;
	v->a[63584] = actions(700);
	v->a[63585] = 2;
	v->a[63586] = anon_sym_LT_LT;
	v->a[63587] = anon_sym_LT_LT_DASH;
	v->a[63588] = actions(914);
	v->a[63589] = 2;
	v->a[63590] = anon_sym_AMP_AMP;
	v->a[63591] = anon_sym_PIPE_PIPE;
	v->a[63592] = actions(1035);
	v->a[63593] = 3;
	v->a[63594] = anon_sym_SEMI_SEMI;
	v->a[63595] = anon_sym_AMP;
	v->a[63596] = anon_sym_SEMI;
	v->a[63597] = state(1134);
	v->a[63598] = 3;
	v->a[63599] = sym_file_redirect;
	small_parse_table_3180(v);
}

/* EOF small_parse_table_635.c */
