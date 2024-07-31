/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_559.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2795(t_small_parse_table_array *v)
{
	v->a[55900] = sym__comment_word;
	v->a[55901] = actions(2256);
	v->a[55902] = 1;
	v->a[55903] = sym__empty_value;
	v->a[55904] = state(1110);
	v->a[55905] = 1;
	v->a[55906] = sym_concatenation;
	v->a[55907] = actions(2252);
	v->a[55908] = 3;
	v->a[55909] = sym_raw_string;
	v->a[55910] = sym_number;
	v->a[55911] = sym_word;
	v->a[55912] = state(868);
	v->a[55913] = 5;
	v->a[55914] = sym_arithmetic_expansion;
	v->a[55915] = sym_string;
	v->a[55916] = sym_simple_expansion;
	v->a[55917] = sym_expansion;
	v->a[55918] = sym_command_substitution;
	v->a[55919] = 5;
	small_parse_table_2796(v);
}

void	small_parse_table_2796(t_small_parse_table_array *v)
{
	v->a[55920] = actions(3);
	v->a[55921] = 1;
	v->a[55922] = sym_comment;
	v->a[55923] = actions(1712);
	v->a[55924] = 1;
	v->a[55925] = aux_sym_heredoc_redirect_token1;
	v->a[55926] = actions(1714);
	v->a[55927] = 1;
	v->a[55928] = anon_sym_PIPE;
	v->a[55929] = state(1269);
	v->a[55930] = 1;
	v->a[55931] = aux_sym_pipeline_repeat1;
	v->a[55932] = actions(1717);
	v->a[55933] = 14;
	v->a[55934] = anon_sym_esac;
	v->a[55935] = anon_sym_SEMI_SEMI;
	v->a[55936] = anon_sym_AMP_AMP;
	v->a[55937] = anon_sym_PIPE_PIPE;
	v->a[55938] = anon_sym_LT;
	v->a[55939] = anon_sym_GT;
	small_parse_table_2797(v);
}

void	small_parse_table_2797(t_small_parse_table_array *v)
{
	v->a[55940] = anon_sym_GT_GT;
	v->a[55941] = anon_sym_LT_AMP;
	v->a[55942] = anon_sym_GT_AMP;
	v->a[55943] = anon_sym_GT_PIPE;
	v->a[55944] = anon_sym_LT_GT;
	v->a[55945] = anon_sym_LT_LT;
	v->a[55946] = anon_sym_LT_LT_DASH;
	v->a[55947] = anon_sym_SEMI;
	v->a[55948] = 11;
	v->a[55949] = actions(3);
	v->a[55950] = 1;
	v->a[55951] = sym_comment;
	v->a[55952] = actions(1341);
	v->a[55953] = 1;
	v->a[55954] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55955] = actions(1343);
	v->a[55956] = 1;
	v->a[55957] = anon_sym_DOLLAR;
	v->a[55958] = actions(1345);
	v->a[55959] = 1;
	small_parse_table_2798(v);
}

void	small_parse_table_2798(t_small_parse_table_array *v)
{
	v->a[55960] = anon_sym_DQUOTE;
	v->a[55961] = actions(1347);
	v->a[55962] = 1;
	v->a[55963] = anon_sym_DOLLAR_LBRACE;
	v->a[55964] = actions(1349);
	v->a[55965] = 1;
	v->a[55966] = anon_sym_DOLLAR_LPAREN;
	v->a[55967] = actions(1351);
	v->a[55968] = 1;
	v->a[55969] = anon_sym_BQUOTE;
	v->a[55970] = actions(1353);
	v->a[55971] = 1;
	v->a[55972] = sym_extglob_pattern;
	v->a[55973] = state(1570);
	v->a[55974] = 2;
	v->a[55975] = sym_concatenation;
	v->a[55976] = sym__extglob_blob;
	v->a[55977] = actions(2258);
	v->a[55978] = 3;
	v->a[55979] = sym_raw_string;
	small_parse_table_2799(v);
}

void	small_parse_table_2799(t_small_parse_table_array *v)
{
	v->a[55980] = sym_number;
	v->a[55981] = sym_word;
	v->a[55982] = state(1515);
	v->a[55983] = 5;
	v->a[55984] = sym_arithmetic_expansion;
	v->a[55985] = sym_string;
	v->a[55986] = sym_simple_expansion;
	v->a[55987] = sym_expansion;
	v->a[55988] = sym_command_substitution;
	v->a[55989] = 10;
	v->a[55990] = actions(3);
	v->a[55991] = 1;
	v->a[55992] = sym_comment;
	v->a[55993] = actions(930);
	v->a[55994] = 1;
	v->a[55995] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55996] = actions(934);
	v->a[55997] = 1;
	v->a[55998] = anon_sym_DQUOTE;
	v->a[55999] = actions(936);
	small_parse_table_2800(v);
}

/* EOF small_parse_table_559.c */
