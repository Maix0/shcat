/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_665.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3325(t_small_parse_table_array *v)
{
	v->a[66500] = 1;
	v->a[66501] = sym_variable_name;
	v->a[66502] = actions(1875);
	v->a[66503] = 2;
	v->a[66504] = anon_sym_PLUS_PLUS;
	v->a[66505] = anon_sym_DASH_DASH;
	v->a[66506] = actions(1877);
	v->a[66507] = 2;
	v->a[66508] = anon_sym_DASH2;
	v->a[66509] = anon_sym_PLUS2;
	v->a[66510] = actions(1885);
	v->a[66511] = 2;
	v->a[66512] = sym_number;
	v->a[66513] = aux_sym__simple_variable_name_token1;
	v->a[66514] = state(365);
	v->a[66515] = 3;
	v->a[66516] = sym_string;
	v->a[66517] = sym_simple_expansion;
	v->a[66518] = sym_expansion;
	v->a[66519] = state(367);
	small_parse_table_3326(v);
}

void	small_parse_table_3326(t_small_parse_table_array *v)
{
	v->a[66520] = 8;
	v->a[66521] = sym__arithmetic_expression;
	v->a[66522] = sym_arithmetic_literal;
	v->a[66523] = sym_arithmetic_binary_expression;
	v->a[66524] = sym_arithmetic_ternary_expression;
	v->a[66525] = sym_arithmetic_unary_expression;
	v->a[66526] = sym_arithmetic_postfix_expression;
	v->a[66527] = sym_arithmetic_parenthesized_expression;
	v->a[66528] = sym_command_substitution;
	v->a[66529] = 15;
	v->a[66530] = actions(1094);
	v->a[66531] = 1;
	v->a[66532] = sym_comment;
	v->a[66533] = actions(1869);
	v->a[66534] = 1;
	v->a[66535] = anon_sym_LPAREN;
	v->a[66536] = actions(1871);
	v->a[66537] = 1;
	v->a[66538] = anon_sym_BANG;
	v->a[66539] = actions(1879);
	small_parse_table_3327(v);
}

void	small_parse_table_3327(t_small_parse_table_array *v)
{
	v->a[66540] = 1;
	v->a[66541] = anon_sym_TILDE;
	v->a[66542] = actions(1881);
	v->a[66543] = 1;
	v->a[66544] = anon_sym_DOLLAR;
	v->a[66545] = actions(1883);
	v->a[66546] = 1;
	v->a[66547] = anon_sym_DQUOTE;
	v->a[66548] = actions(1887);
	v->a[66549] = 1;
	v->a[66550] = anon_sym_DOLLAR_LBRACE;
	v->a[66551] = actions(1889);
	v->a[66552] = 1;
	v->a[66553] = anon_sym_DOLLAR_LPAREN;
	v->a[66554] = actions(1891);
	v->a[66555] = 1;
	v->a[66556] = anon_sym_BQUOTE;
	v->a[66557] = actions(1893);
	v->a[66558] = 1;
	v->a[66559] = sym_variable_name;
	small_parse_table_3328(v);
}

void	small_parse_table_3328(t_small_parse_table_array *v)
{
	v->a[66560] = actions(1875);
	v->a[66561] = 2;
	v->a[66562] = anon_sym_PLUS_PLUS;
	v->a[66563] = anon_sym_DASH_DASH;
	v->a[66564] = actions(1877);
	v->a[66565] = 2;
	v->a[66566] = anon_sym_DASH2;
	v->a[66567] = anon_sym_PLUS2;
	v->a[66568] = actions(1885);
	v->a[66569] = 2;
	v->a[66570] = sym_number;
	v->a[66571] = aux_sym__simple_variable_name_token1;
	v->a[66572] = state(365);
	v->a[66573] = 3;
	v->a[66574] = sym_string;
	v->a[66575] = sym_simple_expansion;
	v->a[66576] = sym_expansion;
	v->a[66577] = state(372);
	v->a[66578] = 8;
	v->a[66579] = sym__arithmetic_expression;
	small_parse_table_3329(v);
}

void	small_parse_table_3329(t_small_parse_table_array *v)
{
	v->a[66580] = sym_arithmetic_literal;
	v->a[66581] = sym_arithmetic_binary_expression;
	v->a[66582] = sym_arithmetic_ternary_expression;
	v->a[66583] = sym_arithmetic_unary_expression;
	v->a[66584] = sym_arithmetic_postfix_expression;
	v->a[66585] = sym_arithmetic_parenthesized_expression;
	v->a[66586] = sym_command_substitution;
	v->a[66587] = 3;
	v->a[66588] = actions(3);
	v->a[66589] = 1;
	v->a[66590] = sym_comment;
	v->a[66591] = actions(1205);
	v->a[66592] = 4;
	v->a[66593] = sym_file_descriptor;
	v->a[66594] = sym__concat;
	v->a[66595] = ts_builtin_sym_end;
	v->a[66596] = aux_sym_heredoc_redirect_token1;
	v->a[66597] = actions(1203);
	v->a[66598] = 21;
	v->a[66599] = anon_sym_PIPE;
	small_parse_table_3330(v);
}

/* EOF small_parse_table_665.c */
