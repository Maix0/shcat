/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_745.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3725(t_small_parse_table_array *v)
{
	v->a[74500] = anon_sym_AMP_GT_GT;
	v->a[74501] = anon_sym_LT_AMP;
	v->a[74502] = anon_sym_GT_AMP;
	v->a[74503] = anon_sym_GT_PIPE;
	v->a[74504] = anon_sym_LT_AMP_DASH;
	v->a[74505] = anon_sym_GT_AMP_DASH;
	v->a[74506] = anon_sym_LT_LT;
	v->a[74507] = anon_sym_LT_LT_DASH;
	v->a[74508] = anon_sym_AMP;
	v->a[74509] = anon_sym_SEMI;
	v->a[74510] = 15;
	v->a[74511] = actions(3);
	v->a[74512] = 1;
	v->a[74513] = sym_comment;
	v->a[74514] = actions(1879);
	v->a[74515] = 1;
	v->a[74516] = anon_sym_LPAREN;
	v->a[74517] = actions(1883);
	v->a[74518] = 1;
	v->a[74519] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3726(v);
}

void	small_parse_table_3726(t_small_parse_table_array *v)
{
	v->a[74520] = actions(1885);
	v->a[74521] = 1;
	v->a[74522] = anon_sym_DOLLAR;
	v->a[74523] = actions(1887);
	v->a[74524] = 1;
	v->a[74525] = anon_sym_DQUOTE;
	v->a[74526] = actions(1889);
	v->a[74527] = 1;
	v->a[74528] = anon_sym_DOLLAR_LBRACE;
	v->a[74529] = actions(1891);
	v->a[74530] = 1;
	v->a[74531] = anon_sym_DOLLAR_LPAREN;
	v->a[74532] = actions(1893);
	v->a[74533] = 1;
	v->a[74534] = anon_sym_BQUOTE;
	v->a[74535] = actions(1895);
	v->a[74536] = 1;
	v->a[74537] = sym_extglob_pattern;
	v->a[74538] = state(1396);
	v->a[74539] = 1;
	small_parse_table_3727(v);
}

void	small_parse_table_3727(t_small_parse_table_array *v)
{
	v->a[74540] = aux_sym_case_statement_repeat1;
	v->a[74541] = state(1923);
	v->a[74542] = 1;
	v->a[74543] = sym_case_item;
	v->a[74544] = state(2175);
	v->a[74545] = 1;
	v->a[74546] = sym__case_item_last;
	v->a[74547] = state(2078);
	v->a[74548] = 2;
	v->a[74549] = sym_concatenation;
	v->a[74550] = sym__extglob_blob;
	v->a[74551] = actions(1875);
	v->a[74552] = 3;
	v->a[74553] = sym_raw_string;
	v->a[74554] = sym_number;
	v->a[74555] = sym_word;
	v->a[74556] = state(2004);
	v->a[74557] = 5;
	v->a[74558] = sym_arithmetic_expansion;
	v->a[74559] = sym_string;
	small_parse_table_3728(v);
}

void	small_parse_table_3728(t_small_parse_table_array *v)
{
	v->a[74560] = sym_simple_expansion;
	v->a[74561] = sym_expansion;
	v->a[74562] = sym_command_substitution;
	v->a[74563] = 3;
	v->a[74564] = actions(3);
	v->a[74565] = 1;
	v->a[74566] = sym_comment;
	v->a[74567] = actions(2364);
	v->a[74568] = 2;
	v->a[74569] = sym_file_descriptor;
	v->a[74570] = aux_sym_heredoc_redirect_token1;
	v->a[74571] = actions(2366);
	v->a[74572] = 19;
	v->a[74573] = anon_sym_esac;
	v->a[74574] = anon_sym_PIPE;
	v->a[74575] = anon_sym_SEMI_SEMI;
	v->a[74576] = anon_sym_AMP_AMP;
	v->a[74577] = anon_sym_PIPE_PIPE;
	v->a[74578] = anon_sym_LT;
	v->a[74579] = anon_sym_GT;
	small_parse_table_3729(v);
}

void	small_parse_table_3729(t_small_parse_table_array *v)
{
	v->a[74580] = anon_sym_GT_GT;
	v->a[74581] = anon_sym_AMP_GT;
	v->a[74582] = anon_sym_AMP_GT_GT;
	v->a[74583] = anon_sym_LT_AMP;
	v->a[74584] = anon_sym_GT_AMP;
	v->a[74585] = anon_sym_GT_PIPE;
	v->a[74586] = anon_sym_LT_AMP_DASH;
	v->a[74587] = anon_sym_GT_AMP_DASH;
	v->a[74588] = anon_sym_LT_LT;
	v->a[74589] = anon_sym_LT_LT_DASH;
	v->a[74590] = anon_sym_AMP;
	v->a[74591] = anon_sym_SEMI;
	v->a[74592] = 3;
	v->a[74593] = actions(3);
	v->a[74594] = 1;
	v->a[74595] = sym_comment;
	v->a[74596] = actions(2411);
	v->a[74597] = 2;
	v->a[74598] = sym_file_descriptor;
	v->a[74599] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3730(v);
}

/* EOF small_parse_table_745.c */
