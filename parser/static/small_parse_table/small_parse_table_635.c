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
	v->a[63500] = anon_sym_LT_LT_DASH;
	v->a[63501] = anon_sym_AMP;
	v->a[63502] = aux_sym_concatenation_token1;
	v->a[63503] = anon_sym_BQUOTE;
	v->a[63504] = anon_sym_SEMI;
	v->a[63505] = 5;
	v->a[63506] = actions(3);
	v->a[63507] = 1;
	v->a[63508] = sym_comment;
	v->a[63509] = actions(811);
	v->a[63510] = 1;
	v->a[63511] = sym_variable_name;
	v->a[63512] = actions(1572);
	v->a[63513] = 1;
	v->a[63514] = sym_file_descriptor;
	v->a[63515] = actions(805);
	v->a[63516] = 9;
	v->a[63517] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63518] = anon_sym_DOLLAR;
	v->a[63519] = anon_sym_DQUOTE;
	small_parse_table_3176(v);
}

void	small_parse_table_3176(t_small_parse_table_array *v)
{
	v->a[63520] = sym_raw_string;
	v->a[63521] = sym_number;
	v->a[63522] = anon_sym_DOLLAR_LBRACE;
	v->a[63523] = anon_sym_DOLLAR_LPAREN;
	v->a[63524] = anon_sym_BQUOTE;
	v->a[63525] = sym_word;
	v->a[63526] = actions(1570);
	v->a[63527] = 15;
	v->a[63528] = anon_sym_PIPE;
	v->a[63529] = anon_sym_AMP_AMP;
	v->a[63530] = anon_sym_PIPE_PIPE;
	v->a[63531] = anon_sym_LT;
	v->a[63532] = anon_sym_GT;
	v->a[63533] = anon_sym_GT_GT;
	v->a[63534] = anon_sym_AMP_GT;
	v->a[63535] = anon_sym_AMP_GT_GT;
	v->a[63536] = anon_sym_LT_AMP;
	v->a[63537] = anon_sym_GT_AMP;
	v->a[63538] = anon_sym_GT_PIPE;
	v->a[63539] = anon_sym_LT_AMP_DASH;
	small_parse_table_3177(v);
}

void	small_parse_table_3177(t_small_parse_table_array *v)
{
	v->a[63540] = anon_sym_GT_AMP_DASH;
	v->a[63541] = anon_sym_LT_LT;
	v->a[63542] = anon_sym_LT_LT_DASH;
	v->a[63543] = 17;
	v->a[63544] = actions(3);
	v->a[63545] = 1;
	v->a[63546] = sym_comment;
	v->a[63547] = actions(1957);
	v->a[63548] = 1;
	v->a[63549] = anon_sym_esac;
	v->a[63550] = actions(1959);
	v->a[63551] = 1;
	v->a[63552] = anon_sym_LPAREN;
	v->a[63553] = actions(1963);
	v->a[63554] = 1;
	v->a[63555] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63556] = actions(1965);
	v->a[63557] = 1;
	v->a[63558] = anon_sym_DOLLAR;
	v->a[63559] = actions(1967);
	small_parse_table_3178(v);
}

void	small_parse_table_3178(t_small_parse_table_array *v)
{
	v->a[63560] = 1;
	v->a[63561] = anon_sym_DQUOTE;
	v->a[63562] = actions(1969);
	v->a[63563] = 1;
	v->a[63564] = anon_sym_DOLLAR_LBRACE;
	v->a[63565] = actions(1971);
	v->a[63566] = 1;
	v->a[63567] = anon_sym_DOLLAR_LPAREN;
	v->a[63568] = actions(1973);
	v->a[63569] = 1;
	v->a[63570] = anon_sym_BQUOTE;
	v->a[63571] = actions(1975);
	v->a[63572] = 1;
	v->a[63573] = sym_extglob_pattern;
	v->a[63574] = state(1475);
	v->a[63575] = 1;
	v->a[63576] = aux_sym_case_statement_repeat1;
	v->a[63577] = state(2080);
	v->a[63578] = 1;
	v->a[63579] = sym_case_item;
	small_parse_table_3179(v);
}

void	small_parse_table_3179(t_small_parse_table_array *v)
{
	v->a[63580] = state(2461);
	v->a[63581] = 1;
	v->a[63582] = sym__case_item_last;
	v->a[63583] = state(2224);
	v->a[63584] = 2;
	v->a[63585] = sym_concatenation;
	v->a[63586] = sym__extglob_blob;
	v->a[63587] = actions(1955);
	v->a[63588] = 3;
	v->a[63589] = sym_raw_string;
	v->a[63590] = sym_number;
	v->a[63591] = sym_word;
	v->a[63592] = actions(1961);
	v->a[63593] = 4;
	v->a[63594] = anon_sym_SEMI_SEMI;
	v->a[63595] = aux_sym_heredoc_redirect_token1;
	v->a[63596] = anon_sym_AMP;
	v->a[63597] = anon_sym_SEMI;
	v->a[63598] = state(2157);
	v->a[63599] = 5;
	small_parse_table_3180(v);
}

/* EOF small_parse_table_635.c */
